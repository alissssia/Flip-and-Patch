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

    // declaracion de activaciones y p_bits
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
    tick(top, 2); // dos ciclos de reloj para reset
    top->reset = 0;

    // fase 1: escritura de activaciones en cache
    for (int i = 0; i < M; i++) {
        top->read_write = 0; // modo escritura
        top->request = 1; // solicitud de escritura
        top->index = i;
        top->address = i; // dirección de activación
        top->activation_in = data_patch[i]; // activación a escribir
        tick(top, 2); // dos ciclos de reloj para completar la escritura
    }

    // fase 2: lectura de activaciones desde cache
    for (int i = 0; i < M; i++) {
        top->index = i;
        top->read_write = 1; // modo lectura
        top->request = 1; // solicitud de lectura
        top->address = i; // dirección de activación
        tick(top, 2); // dos ciclos de reloj para completar la lectura
        top->store_enable = 1; 
        tick(top);
        top->store_enable = 0; // desactivar almacenamiento
    }

    // fase 3: pruebas de patching
    for (int i = 0; i < M; ++i) {
        top->activation_org[i] = data_original[i];
        top->p[i] = p_bits[i];
    }
    tick(top);

    
    std::cout << "\n=== RESULTADOS DE PATCHING ===\n";
    for (int i = 0; i < M; ++i) {
        uint16_t final = top->chosen_activation[i];
        std::cout << "Pos " << std::dec << i
                << " | Original: 0x"   << std::setw(4) << std::setfill('0') << std::hex << data_original[i]
                << " | Cacheado: 0x"   << std::setw(4) << std::setfill('0') << std::hex << data_patch[i]
                << " | p: "            << std::dec << p_bits[i]
                << " | Final: 0x"      << std::setw(4) << std::setfill('0') << std::hex << final
                << std::endl;
    }
    std::cout << "================================\n";

    // limpieza
    delete top;
    return 0;
}