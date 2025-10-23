#include "Vtop_patching_uno.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtop_patching_uno* top = new Vtop_patching_uno;

    // reset
    top->clk = 0;
    top->reset = 1;
    top->eval();
    top->clk = 1;
    top->eval();

    // Release reset
    top->reset = 0;
    top->request = 0;
    top->read_write = 0;
    //top->p = 0;
    top->activation_org = 0xAAAA;
    top->address = 0x05;
    top->activation_in = 0xDEAD;

    // Escribe en cache (2 ciclos)
    top->request = 1;
    top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();


    top->request = 0;
    top->eval();


    // Lee desde caché y prueba el mecanismo (2 ciclos)
    top->read_write = 1;
    top->p = 1;
    top->request = 1;
    top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    std::cout << "Activación original: 0x" << std::hex << top->activation_org << std::endl;
    std::cout << "Activación cacheada: 0x" << std::hex << top->activation_in << std::endl;


    std::cout << " ====================================" << std::endl;
    std::cout << "Pruebas de patching:" << std::endl;



    std::cout << "Activación elegida con patching: 0x" << std::hex << top->chosen_activation << std::endl;
    std::cout << "Validez: " << (int)top->valid << " | Error: " << (int)top->error << std::endl;


    // Desactiva patching
    top->p = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    std::cout << "Activación elegida sin patching: 0x" << std::hex << top->chosen_activation << std::endl;

    delete top;
    return 0;
}