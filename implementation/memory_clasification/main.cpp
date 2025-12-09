#include "Vtestbench.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdint>

static constexpr int N_WORDS = 64; // to ensure it works with a smaller number

void clock_tick(Vtestbench* tb) {
    tb->clk = 0;
    tb->eval();
    tb->clk = 1;
    tb->eval();
}

// converts the error code to string for clarity
auto err_to_str = [](uint32_t e)->const char* {
    switch (e & 0x3) {
        case 0b00: return "OK";
        case 0b01: return "HighOrder (an error in high order bits)";
        case 0b10: return "High&Low (an error in both high and low order bits)";
        case 0b11: return "Isn't supposed to happen";
        default:   return "??";
    }
};

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vtestbench* tb = new Vtestbench;

    // initialization
    tb->reset = 1;
    tb->start = 0;
    clock_tick(tb); // cycle 0

    for (int i = 0; i < 4; ++i) {
        clock_tick(tb); // 4 cycles in reset
    }

    // release reset and start
    tb->reset = 0;
    tb->start = 1;
    clock_tick(tb); 
    tb->start = 0;

    while (!tb->all_done) {
        clock_tick(tb);
    }

    std::printf("\n== Results sweep 1s ==\n");
    for (int i = 0; i < N_WORDS; ++i) {

        uint32_t e = tb->error_1[i];
        std::printf("addr %02d -> err %02x  (%s)\n", i, e, err_to_str(e));
    }

    std::printf("\n== Results sweep 0s ==\n");
    for (int i = 0; i < N_WORDS; ++i) {
        uint32_t e = tb->error_0[i];
        std::printf("addr %02d -> err %02x  (%s)\n", i, e, err_to_str(e));
    }

    delete tb;
    return 0;
}