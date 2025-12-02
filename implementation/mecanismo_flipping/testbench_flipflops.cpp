#include "Vflipflop_one.h"
#include "Vflipflop_one_nbits.h"
#include "Vflipflop_vector.h"
#include "Vflipflop_block.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vflipflop_one* ff1 = new Vflipflop_one;
    Vflipflop_one_nbits* ff4 = new Vflipflop_one_nbits;
    Vflipflop_vector* ff2 = new Vflipflop_vector;
    Vflipflop_block* ff3 = new Vflipflop_block;

    // test flipflop one bit
    std::cout << "Test flipflop one" << std::endl;
    ff1->d = 1;
    ff1->rst = 0;
    ff1->clk = 0; // flank 1 (cycle 0)
    ff1->eval();
    ff1->clk = 1;
    ff1->eval(); // flank 2 (cycle 1)
    std::cout << "ff1: " << (int)ff1->q << std::endl;


    delete ff1;

    // test flipflop with one component of n bits
    std::cout << "Test flipflop with one component of n bits" << std::endl;
    ff4->d = 0b0000000000000011;
    ff4->rst = 0;
    ff4->clk = 0; // flank 1 (cycle 0)
    ff4->eval();
    ff4->clk = 1;
    ff4->eval(); // flank 2 (cycle 1)
    std::cout << "ff4: " << (int)ff4->q << std::endl;

    delete ff4;

    // test flipflop vector
    std::cout << "Test flipflop vector" << std::endl;
    for (int i = 0; i < 16; i++) {
        ff2->d[i] = 0b1;
    }
    ff2->rst = 0;
    ff2->clk = 0; // flank 1 (cycle 0)
    ff2->eval();
    ff2->clk = 1;
    ff2->eval(); // flank 2 (cycle 1)
    for (int i = 0; i < 16; i++) {
        std::cout << "ff2: " << (int)ff2->q[i] << std::endl;
    }
    
    delete ff2;
    
    // test flipflop block
    std::cout << "Test flipflop block" << std::endl;
    for (int i = 0; i < 16; i++) {
        ff3->d[i] = 0b0000000000000001;
    }
    ff3->rst = 0;
    ff3->clk = 0; // flank 1 (cycle 0)
    ff3->eval();
    ff3->clk = 1;
    ff3->eval(); // flank 2 (cycle 1)
    for (int i = 0; i < 16; i++) {
        std::cout << "ff3: " << (int)ff3->q[i] << std::endl;
    }
    delete ff3;


    return 0;
}