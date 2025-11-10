`ifndef MECANISMO_FLIPPING_FLIPFLOP_SV
`define MECANISMO_FLIPPING_FLIPFLOP_SV

module mecanismo_flipping_flipflop
    #(parameter N = 16, M = 16)
        (   input clk, rst, input_f_bits [M - 1:0],
            input [N - 1:0] input_activaciones [M - 1:0],
            output [N - 1:0] salida_flip_flop_con_activaciones_procesadas [M - 1:0]);
    wire salida_flip_flop_con_bit_f [M -1:0];
    wire [N - 1:0] salida_flip_flop_activaciones_sin_procesar [M - 1:0];
    wire [N - 1:0] salida_mecanismo_flipping [M - 1:0];
    flipflop_vector #(M) u1 (
        .clk(clk),
        .rst(rst),
        .d(input_f_bits),
        .q(salida_flip_flop_con_bit_f)); // flip-flop de f_bits
    flipflop_bloque #(N, M) u0 (
        .clk(clk),
        .rst(rst),
        .d(input_activaciones),
        .q(salida_flip_flop_activaciones_sin_procesar)); // flip-flop de a_bits

    mecanismo_flipping_bloque #(N, M) u2 (.a(salida_flip_flop_activaciones_sin_procesar), .f(salida_flip_flop_con_bit_f), .b(salida_mecanismo_flipping)); // llamada al mecanismo flipping

    flipflop_bloque #(N, M) u3 (
        .clk(clk),
        .rst(rst),
        .d(salida_mecanismo_flipping),
        .q(salida_flip_flop_con_activaciones_procesadas)); // introducir el resultado en b con otro flip-flop

endmodule

`endif // MECANISMO_FLIPPING_FLIPFLOP_SV


    