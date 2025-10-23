#include "Vtestbench.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdint>

static constexpr int N_WORDS = 64; // para asegurar que funciona con un numero mas pequeño

void clock_tick(Vtestbench* tb) {
    tb->clk = 0;
    tb->eval();
    tb->clk = 1;
    tb->eval();
}

// convierte el codigo de error a string para mas claridad
auto err_to_str = [](uint32_t e)->const char* {
    switch (e & 0x3) {
        case 0b00: return "OK";
        case 0b01: return "HighOrder (solo byte alto)";
        case 0b10: return "High&Low (alto y bajo)";
        case 0b11: return "Algo raro ha pasado";
        default:   return "??";
    }
};

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtestbench* tb = new Vtestbench;

    // inicializacion
    tb->reset = 1;
    tb->start = 0;
    clock_tick(tb); // ciclo 0

    for (int i = 0; i < 4; ++i) {
        clock_tick(tb); // 4 ciclos en reset
    }

    // quitamos el reset y arrancamos
    tb->reset = 0;
    tb->start = 1;
    clock_tick(tb); 
    tb->start = 0;

    while (!tb->all_done) {
        clock_tick(tb);
    }

    std::printf("\n== Resultados barrido 1s ==\n");
    for (int i = 0; i < N_WORDS; ++i) {

        uint32_t e = tb->error_1[i];
        std::printf("addr %02d -> err %02x  (%s)\n", i, e, err_to_str(e));
    }

    std::printf("\n== Resultados barrido 0s ==\n");
    for (int i = 0; i < N_WORDS; ++i) {
        uint32_t e = tb->error_0[i];
        std::printf("addr %02d -> err %02x  (%s)\n", i, e, err_to_str(e));
    }

    delete tb;
    return 0;
}