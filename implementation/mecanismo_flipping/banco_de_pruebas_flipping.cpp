#include "Vmecanismo_flipping_flipflop.h"
#include "verilated.h"
#include <iostream>
#include <bitset>

int main (int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vmecanismo_flipping_flipflop* flipping = new Vmecanismo_flipping_flipflop;
    // comprobar si reset funciona
    // Prueba 1: f_bit[i] = 0
    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        flipping->input_f_bits[i] = 0;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 1: f_bit[i] = 0" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }

    // Prueba 2: f_bit[i] = 1

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 2: f_bit[i] = 1" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Prueba 3: f_bit = 0b1010101010101010

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1000000000000000;
        if (i % 2 == 0) flipping->input_f_bits[i] = 1;
        else flipping->input_f_bits[i] = 0;        
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 3: f_bit = 0b1010101010101010" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Prueba 4: input_activaciones = 0b0000000000000100

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b0000000000000100;
        if (i % 2 == 0) flipping->input_f_bits[i] = 1;
        else flipping->input_f_bits[i] = 0;        
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 4: input_activaciones = 0b0000000000000100" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << (int)flipping->input_activaciones[i] <<
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<
        "; b[" << i << "]: " << (int)flipping->salida_flip_flop_con_activaciones_procesadas[i] << std::endl;
    }


    // Prueba 5: valores diferentes de input_activaciones

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
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)


    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 5: valores diferentes de input_activaciones" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // clear de los valores en b
    
    flipping->rst = 1;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)

    // Prueba 6: comprobamos que antes del flanco 2 del ciclo 2, la salida es 0

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 6: comprobamos que antes del flanco 2 del ciclo 2, la salida es 0" << std::endl;

    std::cout << "Flanco 1 (ciclo 0)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)

    std::cout << "Flanco 2 (ciclo 1)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();

    std::cout << "Flanco 1 (ciclo 2)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "Flanco 2 (ciclo 2)" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }


    // Prueba 7: input_activaciones es todo 1s

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1111111111111111;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 7: input_activaciones es todo 1s" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // Prueba 8: input_activaciones es un numero capicua

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = 0b1010101001010101;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 8: input_activaciones es un numero capicua" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // Prueba 9: numero aleatorio en input_activaciones

    for (int i = 0; i < 16; i++) {
        flipping->input_activaciones[i] = rand() % 65536;
        flipping->input_f_bits[i] = 1;
    }

    flipping->rst = 0;
    flipping->clk = 0; // flanco 1 (ciclo 0)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 1)
    flipping->clk = 0; // flanco 1 (ciclo 2)
    flipping->eval();
    flipping->clk = 1;
    flipping->eval(); // flanco 2 (ciclo 2)

    std::cout << "-------------------------------------------------------------" << std::endl;
    std::cout << "Prueba 9: numero aleatorio en input_activaciones" << std::endl;
    for (int i = 0; i < 16; i++) {
        std::cout << 
        "a[" << i << "]: " << std::bitset<16>(flipping->input_activaciones[i]) << 
        "; f[" << i << "]: " << (int)flipping->input_f_bits[i] <<      
        "; b[" << i << "]: " << std::bitset<16>(flipping->salida_flip_flop_con_activaciones_procesadas[i]) << std::endl; 
    }

    // meter valores aleatorios check
    // probar capicua check
    // probar todo 1s check


    // definir que operaciones necesita mi cache, cuantos acceso al array de datos en cada ciclo, tags..., bits de validez en 
    // bloque de SRAM o no

    //tile_cache seria como el bloque de arriba, me vienen todas la señales de entrada y de salida
    /* 
    -systemverilog opensource cache buscar
    -bloques de sram son sincronos, las señales que quiero meter las tengo que tener preparadas el ciclo anterior
    -
    */


    delete flipping;
}