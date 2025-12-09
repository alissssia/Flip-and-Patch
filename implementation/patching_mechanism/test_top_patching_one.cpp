#include "Vtop_patching_one.h"
#include "verilated.h"
#include <iostream>

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vtop_patching_one* top = new Vtop_patching_one;

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

    // Write to cache (2 cycles)
    top->request = 1;
    top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();


    top->request = 0;
    top->eval();


    // Read from cache and test the mechanism (2 cycles)
    top->read_write = 1;
    top->p = 1;
    top->request = 1;
    top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    std::cout << "Original activation: 0x" << std::hex << top->activation_org << std::endl;
    std::cout << "Cached activation: 0x" << std::hex << top->activation_in << std::endl;


    std::cout << " ====================================" << std::endl;
    std::cout << "Patching tests:" << std::endl;



    std::cout << "Chosen activation with patching: 0x" << std::hex << top->chosen_activation << std::endl;
    std::cout << "Validity: " << (int)top->valid << " | Error: " << (int)top->error << std::endl;


    // Disable patching
    top->p = 0;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();

    std::cout << "Chosen activation without patching: 0x" << std::hex << top->chosen_activation << std::endl;

    delete top;
    return 0;
}