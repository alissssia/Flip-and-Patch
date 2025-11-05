#include "Vfinal_integration.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <bitset>
#include <string>

static constexpr int N_WORDS = 64;//(1 << 20);

void clock_tick(Vfinal_integration* tb) {
    tb->clk = 0;
    tb->eval();
    tb->clk = 1;
    tb->eval();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vfinal_integration* tb = new Vfinal_integration;

    //inicializacion
    tb->reset = 1;
    tb->start_scan = 0;
    tb->start_reading = 0;

    clock_tick(tb); // ciclo 0

    for (int i = 0; i < 4; ++i) {
        clock_tick(tb); // 4 ciclos en reset
    }

    // quitamos el reset
    tb->reset = 0;
    tb->start_scan = 1;
    clock_tick(tb); 
    tb->start_scan = 0;

    // esperamos a que termine el escaneo
    while (!tb->scan_done) {
        clock_tick(tb);
    }

    std::printf("Escaneo de la memoria completado. f y p obtenidos\n");

    // datos de entrada
    for (int i = 0; i < 4; ++i) {
        tb->activation_org[i] = 0x1000 + i;
        tb->activation_cache[i] = 0x0000 + i;
    }

    tb->start_reading = 1;
    clock_tick(tb);
    //tb->start_reading = 0;



    const int M = 4;

    // Cabecera en filas (una por canal)
    std::printf("\n%-6s | %-3s | %-16s | %-16s | %-16s | f p\n", "Ciclo", "Ch", "Act", "Flip", "Patch");
    std::printf("-%-6s-+-%-3s-+-%-16s-+-%-16s-+-%-16s-+----\n", "", "", "", "", "");

    for (int cyc = 0; cyc < N_WORDS * 2 + 20; ++cyc) {
        clock_tick(tb);

        for (int ch = 0; ch < M; ++ch) {
            std::string act   = std::bitset<16>(tb->activation_final[ch]).to_string();
            std::string flip  = std::bitset<16>(tb->flipped_out[ch]).to_string();
            std::string patch = std::bitset<16>(tb->patched_out[ch]).to_string();
            unsigned int fbit = tb->f_m;
            unsigned int pbit = tb->p_m;

            std::printf("%6d | %3d | %s | %s | %s | %d %d\n",
                        cyc, ch, act.c_str(), flip.c_str(), patch.c_str(), fbit, pbit);
        }
        // separador opcional entre ciclos
        // std::printf("---------------------------------------------------------------\n");
    }

    for (int i = 0; i < N_WORDS; ++i) {
        std::printf("f[%02d]=%d ", i, tb->f[i]);
        std::printf("|| p[%02d]=%d \n", i, tb->p[i]);
    }

    std:printf("cantidad de bits f=1: %d\n", tb->count_f);
    std::printf("cantidad de bits p=1: %d\n", tb->count_p);
    
    delete tb;
    return 0;
}