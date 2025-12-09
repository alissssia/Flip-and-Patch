#include "Vcache_tfg.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <bitset>


vluint64_t main_time = 0;
double sc_time_stamp() {
    return main_time;
}

void tick(Vcache_tfg* cache) {
    cache->clk = 0;
    cache->eval();
    main_time++;

    cache->clk = 1;
    cache->eval();
    main_time++;
}

uint32_t make_address (uint16_t tag, uint8_t set) {
    return (static_cast<uint32_t>(tag) << 8) | set;
}

int main (int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcache_tfg* cache = new Vcache_tfg;

    // initialization
    cache->clk = 0;
    cache->reset = 1;
    cache->request = 0;
    cache->read_write = 0;
    cache->address = 0;
    cache->activation_in = 0;

    std::cout << "=== Reset Mode ===" << std::endl;
    for (int i = 0; i < 3; i++) {
        tick(cache);
    }

    // we release reset
    cache->reset = 0;

    int j = 0; // variable for the set, which changes every 5 writes
    // we write 20 entries to fill 4 cache lines
    for (int i = 0; i < 20; i++) {
        uint16_t tag = i;
        uint8_t set = j;
        uint32_t address = make_address(tag, set);

        std::cout << "Writing tag = " << tag 
                  << ", set = " << static_cast<int>(set) 
                  << ", address = 0x" << std::hex << std::setw(6) << std::setfill('0') << address << std::dec 
                  << ", value = " << i << std::endl;
        std::cout << "Cycle = " << main_time / 2 << std::endl;
        

        cache->address = address;
        cache->activation_in = i;
        cache->request = 1;
        cache->read_write = 0;

        // two cycles
        tick(cache);
        tick(cache);
        if ((i + 1) % 5 == 0) {
            j++; // we change the set every 5 writes
        }



        std::cout << "====================" << std::endl;
    }

    std::cout << "=== Writing Complete ===" << std::endl;


    j = 0; // we reset j for the reads
    // we read the entries
    std::cout << "\n=== Reading Activations ===" << std::endl;
    for (int i = 0; i < 20; i++) {
        uint16_t tag = i;
        uint8_t set = j;
        uint32_t address = make_address(tag, set);

        cache->address = address;
        cache->activation_in = 0; // activation value does not matter when reading
        cache->request = 1;
        cache->read_write = 1;

        // two cycles
        tick(cache);
        tick(cache);

        // we show the read value

        std::cout << "Reading tag = " << tag 
                  << ", set = " << static_cast<int>(set) 
                  << ", address = 0x" << std::hex << std::setw(6) << std::setfill('0') << address << std::dec 
                  << ", expected value = " << i << std::endl;
        std::cout << "Read value: " << cache->activation_out << std::endl;
        std::cout << "Cycle = " << main_time / 2 << std::endl;
        std::cout << "====================" << std::endl;

        if ((i + 1) % 5 == 0) {
            j++; // we change the set every 5 reads
        }
    }
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "=== Reading Complete ===" << std::endl;

    // we test writing after reading
    std::cout << "\n=== Writing After Reading ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to read again
    std::cout << "\n=== Reading After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;


    // we try to write
    std::cout << "\n=== Writing After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 0);
    cache->activation_in = 97;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to read
    std::cout << "\n=== Reading After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Read value: " << cache->activation_out << std::endl;


    // we reset
    std::cout << "\n=== Resetting Cache ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to write after reset
    std::cout << "\n=== Writing After Reset ===" << std::endl;
    cache->reset = 0;
    cache->request = 1;
    cache->read_write = 0;
    for (int i = 0; i < 5; i++) {
        uint16_t tag = i;
        uint8_t set = 0;
        uint32_t address = make_address(tag, set);

        cache->address = address;
        cache->activation_in = i;

        std::cout << "Writing tag = " << tag 
                  << ", set = " << static_cast<int>(set) 
                  << ", address = 0x" << std::hex << std::setw(6) << std::setfill('0') << address << std::dec 
                  << ", value = " << i << std::endl;
        std::cout << "Cycle = " << main_time / 2 << std::endl;
        tick(cache);
        tick(cache);
    }
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we go to the nothing state
    std::cout << "\n=== Going to Nothing State ===" << std::endl;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to write again
    std::cout << "\n=== Writing After In Another Set After Full Set ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 12);
    cache->activation_in = 99;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation in: " << cache->activation_in << std::endl;
    std::cout << "Address: 0x" << std::hex << std::setw(6) << std::setfill('0') << cache->address << std::dec << std::endl;
    std::cout << "Write completed." << std::endl;

    // we try to read again
    std::cout << "\n=== Reading Another Set After Writing A Whole Set ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 12);
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation out: " << cache->activation_out << std::endl;
    std::cout << "Read completed." << std::endl;

    // we go to the nothing state again
    std::cout << "\n=== Going to Nothing State Again ===" << std::endl;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to read again
    std::cout << "\n=== Reading After Going to Nothing State Again ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation out: " << cache->activation_out << std::endl;
    std::cout << "Read completed." << std::endl;

    // we try to write again
    std::cout << "\n=== Writing After Going to Nothing State Again and Reading ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 0);
    cache->activation_in = 100;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation in: " << cache->activation_in << std::endl;


    // we reset again
    std::cout << "\n=== Resetting Cache Again ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to read after reset
    std::cout << "\n=== Reading After Reset Again ===" << std::endl;
    cache->reset = 0;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Error state: " << static_cast<int>(cache->error) << std::endl;

    // we try to write in a full set
    // first we reset
    std::cout << "\n=== Resetting Cache for Full Set Write Test ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);



    std::cout << "\n=== Testing Full Set Write (Expect Error) ===" << std::endl;
    cache->reset = 0;

    // We fill set 0 with NWAYS different writes
    for (int i = 0; i < 5; i++) {
        uint16_t tag = i; // different tags
        uint8_t set = 0;
        uint32_t address = make_address(tag, set);

        std::cout << "Wrote tag=" << tag << ", set=" << (int)set
                << ", expected OK. "
                << ", error: " << (int)cache->error << std::endl;

        cache->address = address;
        cache->activation_in = i + 10; // just to differentiate
        cache->request = 1;
        cache->read_write = 0;

        tick(cache);
        tick(cache);
    }

    // We try to write once more in the same set (already full)
    uint32_t full_address = make_address(100, 0); // new tag, same set 0
    cache->address = full_address;
    cache->activation_in = 28147;
    cache->request = 1;
    cache->read_write = 0;

    tick(cache);
    tick(cache);

    std::cout << "Tried writing in full set (tag=100, set=0)" << std::endl;
    std::cout << "Error flag: " << (int)cache->error << std::endl;
    std::cout << "Valid flag: " << (int)cache->valid << std::endl;


    // we read the full set
    std::cout << "\n=== Reading Full Set ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        uint16_t tag = i; // different tags
        uint8_t set = 0;
        uint32_t address = make_address(tag, set);

        cache->address = address;
        cache->activation_in = 0; // activation value doesn't matter when reading
        cache->request = 1;
        cache->read_write = 1;

        tick(cache);
        tick(cache);

        std::cout << "Read tag=" << tag << ", set=" << (int)set
                << ", value: " << cache->activation_out
                << ", error: " << (int)cache->error 
                << ", read value: " << cache->activation_out << std::endl;
    }


    // fin
    std::cout << "\n=== Test Complete ===" << std::endl;



    delete cache;
    return 0;
}