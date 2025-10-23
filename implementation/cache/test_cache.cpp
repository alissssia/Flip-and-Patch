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

    // inicializacion
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

    // quitamos reset
    cache->reset = 0;

    int j = 0; // variable para el set, que cambia cada 5 escrituras
    // escribimos 20 entradas para llenar 4 lineas de cache
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

        // dos ciclos
        tick(cache);
        tick(cache);
        if ((i + 1) % 5 == 0) {
            j++; // cambiamos de set cada 5 escrituras
        }



        std::cout << "====================" << std::endl;
    }

    std::cout << "=== Writing Complete ===" << std::endl;


    j = 0; // reiniciamos j para las lecturas
    // leemos las entradas
    std::cout << "\n=== Reading Activations ===" << std::endl;
    for (int i = 0; i < 20; i++) {
        uint16_t tag = i;
        uint8_t set = j;
        uint32_t address = make_address(tag, set);

        cache->address = address;
        cache->activation_in = 0; // no importa el valor de activacion al leer
        cache->request = 1;
        cache->read_write = 1;

        // dos ciclos
        tick(cache);
        tick(cache);

        // mostramos el valor leido

        std::cout << "Reading tag = " << tag 
                  << ", set = " << static_cast<int>(set) 
                  << ", address = 0x" << std::hex << std::setw(6) << std::setfill('0') << address << std::dec 
                  << ", expected value = " << i << std::endl;
        std::cout << "Read value: " << cache->activation_out << std::endl;
        std::cout << "Cycle = " << main_time / 2 << std::endl;
        std::cout << "====================" << std::endl;

        if ((i + 1) % 5 == 0) {
            j++; // cambiamos de set cada 5 lecturas
        }
    }
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "=== Reading Complete ===" << std::endl;

    // probamos a escribir despues de leer
    std::cout << "\n=== Writing After Reading ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // intentamos volver a leer
    std::cout << "\n=== Reading After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;


    // intentamos escribir
    std::cout << "\n=== Writing After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 0);
    cache->activation_in = 97;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // intentamos leer
    std::cout << "\n=== Reading After Error ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Read value: " << cache->activation_out << std::endl;


    // reseteamos
    std::cout << "\n=== Resetting Cache ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // intentamos escribir despues del reset
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
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // vamos al estado de nothing
    std::cout << "\n=== Going to Nothing State ===" << std::endl;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // intentamos escribir de nuevo
    std::cout << "\n=== Writing After In Another Set After Full Set ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 12);
    cache->activation_in = 99;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation in: " << cache->activation_in << std::endl;
    std::cout << "Address: 0x" << std::hex << std::setw(6) << std::setfill('0') << cache->address << std::dec << std::endl;
    std::cout << "Write completed." << std::endl;

    // intentamos leer de nuevo
    std::cout << "\n=== Reading Another Set After Writing A Whole Set ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 12);
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation out: " << cache->activation_out << std::endl;
    std::cout << "Read completed." << std::endl;

    // al estado de nothing otra vez
    std::cout << "\n=== Going to Nothing State Again ===" << std::endl;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // lectura de nuevo
    std::cout << "\n=== Reading After Going to Nothing State Again ===" << std::endl;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation out: " << cache->activation_out << std::endl;
    std::cout << "Read completed." << std::endl;

    // vuelta a escribir
    std::cout << "\n=== Writing After Going to Nothing State Again and Reading ===" << std::endl;
    cache->request = 1;
    cache->read_write = 0;
    cache->address = make_address(0, 0);
    cache->activation_in = 100;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;
    std::cout << "Activation in: " << cache->activation_in << std::endl;


    // reseteamos de nuevo
    std::cout << "\n=== Resetting Cache Again ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;

    // intentamos leer despues del reset
    std::cout << "\n=== Reading After Reset Again ===" << std::endl;
    cache->reset = 0;
    cache->request = 1;
    cache->read_write = 1;
    cache->address = make_address(0, 0);
    tick(cache);
    tick(cache);
    std::cout << "Estado de error: " << static_cast<int>(cache->error) << std::endl;


    // intentamos escribir en un set lleno
    // primero reseteamos
    std::cout << "\n=== Resetting Cache for Full Set Write Test ===" << std::endl;
    cache->reset = 1;
    cache->request = 0;
    tick(cache);
    tick(cache);



    std::cout << "\n=== Testing Full Set Write (Expect Error) ===" << std::endl;
    cache->reset = 0;

    // Llenamos el set 0 con NWAYS escrituras distintas
    for (int i = 0; i < 5; i++) {
        uint16_t tag = i; // diferentes tags
        uint8_t set = 0;
        uint32_t address = make_address(tag, set);

        std::cout << "Wrote tag=" << tag << ", set=" << (int)set
                << ", expected OK. "
                << ", error: " << (int)cache->error << std::endl;

        cache->address = address;
        cache->activation_in = i + 10; // solo para diferenciar
        cache->request = 1;
        cache->read_write = 0;

        tick(cache);
        tick(cache);
    }

    // Intentamos escribir una vez más en el mismo set (ya lleno)
    uint32_t full_address = make_address(100, 0); // nuevo tag, mismo set 0
    cache->address = full_address;
    cache->activation_in = 28147;
    cache->request = 1;
    cache->read_write = 0;

    tick(cache);
    tick(cache);

    std::cout << "Tried writing in full set (tag=100, set=0)" << std::endl;
    std::cout << "Error flag: " << (int)cache->error << std::endl;
    std::cout << "Valid flag: " << (int)cache->valid << std::endl;


    // leemos el set lleno
    std::cout << "\n=== Reading Full Set ===" << std::endl;
    for (int i = 0; i < 5; i++) {
        uint16_t tag = i; // diferentes tags
        uint8_t set = 0;
        uint32_t address = make_address(tag, set);

        cache->address = address;
        cache->activation_in = 0; // no importa el valor de activacion al leer
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