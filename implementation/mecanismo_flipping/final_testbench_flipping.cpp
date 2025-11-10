#include "Vflipping_mechanism_flipflop.h"
#include "verilated.h"
#include <iostream>
#include <bitset>

int main (int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vflipping_mechanism_flipflop* flipping = new Vflipping_mechanism_flipflop;
    // Test 1: f_bit[i] = 0
    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        flipping->input_f_bits[i] = 0;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 1: f_bit[i] = 0" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }

    // Test 2: f_bit[i] = 1

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 2: f_bit[i] = 1" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Test 3: f_bit = 0b1010101010101010

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        if (i % 2 == 0) flipping->input_f_bits[i] = 1;
        else flipping->input_f_bits[i] = 0;        
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 3: f_bit = 0b1010101010101010" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Test 4: input_activaciones = 0b0000000000000100

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b0000000000000100;
        if (i % 2 == 0) flipping->input_f_bits[i] = 1;
        else flipping->input_f_bits[i] = 0;        
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 4: input_activaciones = 0b0000000000000100" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Test 5: different values of input_activaciones

    flipping->input_activaciones[0] = 0b0000000000000000;
    flipping->input_activaciones[1] = 0b0000000000000001;
    flipping->input_activaciones[2] = 0b0000000000000010;
    flipping->input_activaciones[3] = 0b0000000000000011;
    flipping->input_activaciones[4] = 0b0000000000000100;
    flipping->input_activaciones[5] = 0b0000000000000101;
    flipping->input_activaciones[6] = 0b0000000000000110;
    flipping->input_activaciones[7] = 0b0000000000000111;
    flipping->input_activaciones[8] = 0b0000000000001000;
    flipping->input_activaciones[9] = 0b0000000000001001;
    flipping->input_activaciones[10] = 0b0000000000001010;
    flipping->input_activaciones[11] = 0b0000000000001011;
    flipping->input_activaciones[12] = 0b0000000000001100;
    flipping->input_activaciones[13] = 0b0000000000001101;
    flipping->input_activaciones[14] = 0b0000000000001110;
    flipping->input_activaciones[15] = 0b0000000000001111;

    for (int i = 0; i < 16; i++) {
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)


    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 5: different values of input_activaciones" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // clear of values in b
    
    flipping->rst = 1;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)

    // Test 6: check that before flank 2 of cycle 2, the output is 0

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 6: check that before flank 2 of cycle 2, the output is 0" << std::endl;

    std::cout << "Flank 1 (cycle 0)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)

    std::cout << "Flank 2 (cycle 1)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();

    std::cout << "Flank 1 (cycle 2)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "Flank 2 (cycle 2)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }


    // Test 7: input_activaciones is all 1s

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1111111111111111;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 7: input_activaciones is all 1s" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // Test 8: input_activaciones is a palindrome

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1010101001010101;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 8: input_activaciones is a palindrome" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // Test 9: random number in input_activaciones

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = rand() % 65536;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flank 1 (cycle 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 1)
    flipping->clk = 0; // flank 1 (cycle 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flank 2 (cycle 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Test 9: random number in input_activaciones" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }


    delete flipping;
}