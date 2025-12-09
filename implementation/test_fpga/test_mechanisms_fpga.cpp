#include "Vtest_mechanisms_fpga_good.h"
#include "verilated.h"
#include <iostream>
#include <bitset>
#include <iomanip>

const int NUM_ACTIVATIONS = 6;

uint16_t activation_org_data[NUM_ACTIVATIONS] = {
    0x1010, 0x2020, 0x3030, 0x4040, 0x5050, 0x6060
};

uint16_t activation_cache_data[NUM_ACTIVATIONS] = {
    0xAAAA, 0xBBBB, 0xCCCC, 0xDDDD, 0xEEEE, 0xFFFF
};

uint8_t f_data[NUM_ACTIVATIONS] = {1, 0, 0, 1, 1, 0};
uint8_t p_data[NUM_ACTIVATIONS] = {0, 1, 1, 0, 0, 0};

void tick(Vtest_mechanisms_fpga_good* top) {
    top->clk = 0;
    top->eval();
    top->clk = 1;
    top->eval();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtest_mechanisms_fpga_good* top = new Vtest_mechanisms_fpga_good;

    // Initial reset
    top->reset = 1;
    tick(top);
    top->reset = 0;

    std::cout << "\n========== PHASE 1: WRITING ==========\n";

    // ========== PHASE 1: Writing the entire cache ==========
    
    for (int i = 0; i < NUM_ACTIVATIONS; ++i) {
        top->request = 1;
        top->read_write = 0; // write
        top->address = i;
        top->activation_in = activation_cache_data[i];
        tick(top); // cycle 1
        tick(top); // cycle 2
    }

    std::cout << "valid: " << static_cast<int>(top->valid)
         << ", error: " << static_cast<int>(top->error) << "\n";
    top->request = 0;
    tick(top); // Separation

    std::cout << "\n========== PHASE 2: READING AND MECHANISMS ==========\n";

    top->read_write = 1; // read
    top->request = 1;

    // ========== PHASE 2: Reading and activating mechanisms ==========
    for (int i = 0; i < NUM_ACTIVATIONS; ++i) {
        std::cout << "\n-- Activation " << i << " --\n";

        top->activation_org = activation_org_data[i];
        top->f = f_data[i];
        top->p = p_data[i];
        
        top->address = i;
        

        tick(top); // cycle 1
        tick(top); // cycle 2

        //top->request = 0;
        tick(top); // separation

        // Show results
        std::cout << "f = " << static_cast<int>(top->f)
                  << ", p = " << static_cast<int>(top->p) << "\n";

        std::cout << "activation_org  = " << std::bitset<16>(activation_org_data[i]) << "\n";
        std::cout << "activation_cache= " << std::bitset<16>(activation_cache_data[i]) << "\n";
        std::cout << "flipped_out     = " << std::bitset<16>(top->flipped_out) << "\n";
        std::cout << "patched_out     = " << std::bitset<16>(top->patched_out) << "\n";
        std::cout << "activation_final= " << std::bitset<16>(top->activation_final) << "\n";

        std::cout << "valid: " << static_cast<int>(top->valid)
                  << ", error: " << static_cast<int>(top->error) << "\n";
    }

    std::cout << "\n========== END OF TEST ==========\n";

    delete top;
    return 0;
}
