#include "Vmecanismo_flipping_uno.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmecanismo_flipping_uno* flip = new Vmecanismo_flipping_uno;

    flip->a = 0b1000000000000000;
    flip->f = 1;

    std::cout << "a: " << (int)flip->a << std::endl;
    std::cout << "f: " << (int)flip->f << std::endl;

    flip->eval();

    std::cout << "b: " << (int)flip->b << std::endl;

    delete flip;
    return 0;
}