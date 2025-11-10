#include "Vflipflop_uno.h"
#include "Vflipflop_uno_nbits.h"
#include "Vflipflop_vector.h"
#include "Vflipflop_bloque.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vflipflop_uno* ff1 = new Vflipflop_uno;
    Vflipflop_uno_nbits* ff4 = new Vflipflop_uno_nbits;
    Vflipflop_vector* ff2 = new Vflipflop_vector;
    Vflipflop_bloque* ff3 = new Vflipflop_bloque;

    // prueba flipflop uno
    std::cout << "Prueba flipflop uno" << std::endl;
    ff1->d = 1;
    ff1->rst = 0;
    ff1->clk = 0; // flanco 1 (ciclo 0)
    ff1->eval();
    ff1->clk = 1;
    ff1->eval(); // flanco 2 (ciclo 1)
    std::cout << "ff1: " << (int)ff1->q << std::endl;


    delete ff1;

    // prueba flipflop una componente de n bits
    std::cout << "Prueba flipflop uno n bits" << std::endl;
    ff4->d = 0b0000000000000011;
    ff4->rst = 0;
    ff4->clk = 0; // flanco 1 (ciclo 0)
    ff4->eval();
    ff4->clk = 1;
    ff4->eval(); // flanco 2 (ciclo 1)
    std::cout << "ff4: " << (int)ff4->q << std::endl;

    delete ff4;

    // prueba flipflop vector
    std::cout << "Prueba flipflop vector" << std::endl;
    for (int i = 0; i < 16; i++) {
        ff2->d[i] = 0b1;
    }
    ff2->rst = 0;
    ff2->clk = 0; // flanco 1 (ciclo 0)
    ff2->eval();
    ff2->clk = 1;
    ff2->eval(); // flanco 2 (ciclo 1)
    for (int i = 0; i < 16; i++) {
        std::cout << "ff2: " << (int)ff2->q[i] << std::endl;
    }
    
    delete ff2;
    
    // prueba flipflop bloque
    std::cout << "Prueba flipflop bloque" << std::endl;
    for (int i = 0; i < 16; i++) {
        ff3->d[i] = 0b0000000000000001;
    }
    ff3->rst = 0;
    ff3->clk = 0; // flanco 1 (ciclo 0)
    ff3->eval();
    ff3->clk = 1;
    ff3->eval(); // flanco 2 (ciclo 1)
    for (int i = 0; i < 16; i++) {
        std::cout << "ff3: " << (int)ff3->q[i] << std::endl;
    }
    delete ff3;


    return 0;
}