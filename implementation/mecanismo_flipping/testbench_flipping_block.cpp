#include "Vmecanismo_flipping_bloque.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmecanismo_flipping_bloque* flip = new Vmecanismo_flipping_bloque;

    for (int i = 0; i < 16; i++) {
        flip->a[i] = 0b1000000000000000;
        if (i % 2 == 0) flip->f[i] = 1;
        else flip->f[i] = 0;        
    }

    for (int i = 0; i < 16; i++) {
        std::cout << "a: " << (int)flip->a[i] << std::endl;
    }
    std::cout << "f: " << (int)flip->f[0] << std::endl;

    flip->eval();

    for (int i = 0; i < 16; i++) {
        std::cout << "b: " << (int)flip->b[i] << std::endl;
    }

    delete flip;
    return 0;
}