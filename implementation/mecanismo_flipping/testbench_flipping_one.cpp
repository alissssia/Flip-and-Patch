#include "Vflipping_mechanism_one.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vflipping_mechanism_one* flip = new Vflipping_mechanism_one;

    flip->a = 0b1000000000000000;
    flip->f = 1;

    std::cout << "a: " << (int)flip->a << std::endl;
    std::cout << "f: " << (int)flip->f << std::endl;

    flip->eval();

    std::cout << "b: " << (int)flip->b << std::endl;

    delete flip;
    return 0;
}