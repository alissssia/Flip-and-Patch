#include "Vtop_patching_16.h"
#include "verilated.h"
#include <iostream>
#include <vector>
#include <cstdint>
#include <iomanip>


// simulación de un ciclo de reloj
void tick(Vtop_patching_16* top, int cycles = 1) {
    for (int i = 0; i < cycles; ++i) {
        top->clk = 0; top->eval();
        top->clk = 1; top->eval();
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop_patching_16* top = new Vtop_patching_16;

    // activation and p_bits declaration
    const int M = 16;
    std::vector<uint16_t> data_patch = {
        0xAAAA, 0xBBBB, 0xCCCC, 0xDDDD,
        0xEEEE, 0x1234, 0x5678, 0x9ABC,
        0x0001, 0x0002, 0x0003, 0x0004,
        0xFACE, 0xBEEF, 0xC0DE, 0xDEAD
    };

    std::vector<uint16_t> data_original = {
        0x1111, 0x2222, 0x3333, 0x4444,
        0x5555, 0x6666, 0x7777, 0x8888,
        0x9999, 0xAAAA, 0xBBBB, 0xCCCC,
        0xDDDD, 0xEEEE, 0xFFFF, 0x0000
    };

    std::vector<bool> p_bits = {
        1, 0, 1, 0,
        1, 0, 1, 0,
        1, 0, 1, 0,
        1, 0, 1, 0
    };

    // reset
    top->reset = 1;
    tick(top, 2); // two clock cycles for reset
    top->reset = 0;

    // phase 1: writing activations to cache
    for (int i = 0; i < M; i++) {
        top->read_write = 0; // write mode
        top->request = 1; // write request
        top->index = i;
        top->address = i; // activation address
        top->activation_in = data_patch[i]; // activation to write
        tick(top, 2); // two clock cycles to complete the write
    }

    // phase 2: reading activations from cache
    for (int i = 0; i < M; i++) {
        top->index = i;
        top->read_write = 1; // read mode
        top->request = 1; // read request
        top->address = i; // activation address
        tick(top, 2); // two clock cycles to complete the read
        top->store_enable = 1; 
        tick(top);
        top->store_enable = 0; // disable storage
    }

    // phase 3: patching tests
    for (int i = 0; i < M; ++i) {
        top->activation_org[i] = data_original[i];
        top->p[i] = p_bits[i];
    }
    tick(top);

    std::cout << "\n=== PATCHING RESULTS ===\n";
    for (int i = 0; i < M; ++i) {
        uint16_t final = top->chosen_activation[i];
        std::cout << "Pos " << std::dec << i
                << " | Original: 0x"   << std::setw(4) << std::setfill('0') << std::hex << data_original[i]
                << " | Cached: 0x"   << std::setw(4) << std::setfill('0') << std::hex << data_patch[i]
                << " | p: "            << std::dec << p_bits[i]
                << " | Final: 0x"      << std::setw(4) << std::setfill('0') << std::hex << final
                << std::endl;
    }
    std::cout << "================================\n";

    // cleanup
    delete top;
    return 0;
}