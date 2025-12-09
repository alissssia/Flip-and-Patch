#include "Vfinal_integration.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdint>
#include <bitset>
#include <string>

static constexpr int N_WORDS = 64;//(1 << 20);
static constexpr int M = 4;
static constexpr int DATA_W = 16;
//static constexpr int NUM_BLOCKS = (N_WORDS + M - 1) / M;

void clock_tick(Vfinal_integration* tb) {
    tb->clk = 0;
    tb->eval();
    tb->clk = 1;
    tb->eval();
}


int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vfinal_integration* tb = new Vfinal_integration;

    //initialization
    tb->reset = 1;
    tb->start_scan = 0;
    tb->start_reading = 0;

    //clock_tick(tb); // cycle 0

    for (int i = 0; i < N_WORDS; ++i) {
        tb->activation_org[i] = 0x7000 + i;
        tb->activation_cache_full[i] = 0x0000 + i;
    }
    // reset cycles

    for (int i = 0; i < 4; ++i) {
        clock_tick(tb); // 4 cycles in reset
    }

    // release reset
    tb->reset = 0;
    clock_tick(tb);
    tb->start_scan = 1;
    clock_tick(tb); 
    tb->start_scan = 0;

    // wait for the scan to complete
    while (!tb->scan_done) {
        clock_tick(tb);
    }

    std::printf("Memory scan completed. f and p obtained\n");
    std::printf("count_f=%u, count_p=%u\n", tb->count_f, tb->count_p);

    // activations
    
    // wait for the cache to be full
    while (!tb->cache_write_finished) {
        clock_tick(tb);
    }

    std::printf("Patching cache full.\n");

    // reading phase
    tb->start_reading = 1;
    clock_tick(tb);
    tb->start_reading = 0;


    const int MAX_CYCLES = 20;//500; //100; // límite de seguridad
    std::printf("\n%-6s | %-3s | %-4s | %-16s | %-16s | %-16s | %-16s | %-3s | %-3s\n",
                "Ciclo", "Ch", "Idx", "Orig", "Final", "FlipOut", "PatchOut", "F", "P");
    std::printf("-%-6s-+-%-3s-+-%-4s-+-%-16s-+-%-16s-+-%-16s-+-%-16s-+-%-3s-+-%-3s\n",
                "", "", "", "", "", "", "", "", "");

    for (int cyc = 0; cyc < MAX_CYCLES; ++cyc) {
        clock_tick(tb);

        for (int ch = 0; ch < M; ++ch) {
            int word_idx = tb->dbg_idx[ch]; 
            // we use the outputs from the ensemble
            uint16_t orig_val = tb->original_activation[ch];
            uint16_t final_val = tb->activation_final[word_idx];
            uint16_t flip_val = tb->flipped_out[word_idx];
            uint16_t patch_val = tb->patched_out[word_idx];
            int fbit = tb->f[word_idx];
            int pbit = tb->p[word_idx];

            std::string orig_str  = std::bitset<DATA_W>(orig_val).to_string();
            std::string final_str = std::bitset<DATA_W>(final_val).to_string();
            std::string flip_str  = std::bitset<DATA_W>(flip_val).to_string();
            std::string patch_str = std::bitset<DATA_W>(patch_val).to_string();

            std::printf("%6d | %3d | %4d | %s | %s | %s | %s |  f=%d | p=%d\n",
                    cyc, ch, word_idx,
                    orig_str.c_str(),
                    final_str.c_str(),
                    flip_str.c_str(),
                    patch_str.c_str(),
                    fbit, pbit);
        }

        /*if (tb->finished) {
            std::printf("\nFinished reading.\n");
            break;
        }*/
    }

    // printing f and p
    /*std::printf("\nf/p (0..%d):\n", N_WORDS-1);
    for (int i = 0; i < N_WORDS; ++i) {
        std::printf("f[%02d]=%d || p[%02d]=%d\n",
                    i, (int)tb->f[i], i, (int)tb->p[i]);
    }*/

    /*for (int cyc = 0; cyc < 4; ++cyc) {  // few cycles
        clock_tick(tb);
        for (int i = 0; i < 8; ++i) {    // first 8 words
            uint16_t val = tb->activation_final[i];
            std::cout << "word " << i << " = "
                    << std::bitset<DATA_W>(val) << std::endl;
        }
    }*/
    
    delete tb;
    return 0;
}
