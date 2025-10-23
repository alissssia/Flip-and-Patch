#include "Vtop_test_mechanisms.h"
#include "verilated.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdint>
#include <bitset>

void tick(Vtop_test_mechanisms* top, int cycles = 1) {
    for (int i = 0; i < cycles; ++i) {
        top->clk = 0;
        top->eval();
        top->clk = 1;
        top->eval();
    }
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtop_test_mechanisms* top = new Vtop_test_mechanisms;

    const int M = 16;

    std::vector<uint16_t> activation_org = {
        0x1234, 0x5678, 0x9ABC, 0xDEF0,
        0x0001, 0x0002, 0x0003, 0x0004,
        0xFACE, 0xBEEF, 0xC0DE, 0xDEAD,
        0xAAAA, 0xBBBB, 0xCCCC, 0xDDDD
    };

    std::vector<uint16_t> activation_cache = {
        0x4321, 0x8765, 0xBC9A, 0x0FED,
        0x1000, 0x2000, 0x3000, 0x4000,
        0x1234, 0x5678, 0x9ABC, 0xDEF0,
        0x1111, 0x2222, 0x3333, 0x4444
    };

    std::vector<bool> f = {
        1, 0, 0, 0,
        1, 0, 0, 0,
        1, 0, 0, 0,
        1, 0, 0, 0
    };

    std::vector<bool> p = {
        0, 1, 1, 1,
        0, 1, 0, 0,
        0, 1, 0, 0,
        0, 1, 0, 0
    };

    // Verificación de que f y p no coinciden en 1
    for (int i = 0; i < M; ++i) {
        if (f[i] && p[i]) {
            std::cerr << "ERROR: f[" << i << "] y p[" << i << "] no pueden ser 1 al mismo tiempo.\n";
            return 1;
        }
    }

    // Cargar señales en el diseño
    for (int i = 0; i < M; ++i) {
        top->activation_org[i]   = activation_org[i];
        top->activation_cache[i] = activation_cache[i];
        top->f[i] = f[i];
        top->p[i] = p[i];
    }

    // Reset
    top->reset = 1;
    top->start_reading = 0;
    tick(top, 1);

    top->reset = 0;

    // tiempo para cargar la cache
    tick(top, 16);

    // activar lectura desde cache
    top->start_reading = 1;

    // tiempo para lectura y procesamiento
    tick(top, 16);

    // Simular
    /*top->clk = 0;
    top->reset = 0;
    top->eval();
    top->clk = 1;
    top->eval();*/

    // mostrar resultados
    std::cout << "\n=== RESULTADOS COMBINADOS ===\n";
    std::cout << "Idx |     Original     |     Flipped      |     Patched      |      Final       | F | P\n";
    std::cout << "----+------------------+------------------+------------------+------------------+---+---\n";


    for (int i = 0; i < M; ++i) {
        std::cout << std::dec << std::setw(2) << std::setfill(' ') << i << "  | "
          << std::bitset<16>(top->activation_org[i])   << " | "
          << std::bitset<16>(top->flipped_out[i])      << " | "
          << std::bitset<16>(top->patched_out[i])      << " | "
          << std::bitset<16>(top->activation_final[i]) << " | "
          << std::bitset<1>(top->f[i]) << " | "
          << std::bitset<1>(top->p[i]) << "\n";

    }
    std::cout << "================================\n";

    delete top;
    return 0;
}
