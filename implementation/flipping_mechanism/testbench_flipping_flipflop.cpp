#include "Vflipping_mechanism_flipflop.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vflipping_mechanism_flipflop* flipping = new Vflipping_mechanism_flipflop;

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        if (i % 2 == 0) flipping->input_f_bits[i] = 1;
        else flipping->input_f_bits[i] = 0;        
    }

    for (int i = 0; i < 16; i++) {
        std::cout << "a[" << i << "]: " << (int)flipping->input_activaciones[i] << std::endl;
    }
    for (int i = 0; i < 16; i++) {
        std::cout << "f[" << i << "]: " << (int)flipping->input_f_bits[i] << std::endl;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 3)

    /*for (int i = 0; i < 16; i++) {
        std::cout << "b[" << i << "]: " << (int)flipping->flipflop_output_processed_activations[i] << std::endl;
    }*/

    std::cout << "-------------------------------------------------------------" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->flipflop_output_processed_activations[i] << std::endl;
    }

    delete flipping;
    return 0;    
}