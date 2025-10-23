`ifndef MECANISMO_FLIPPING_UNO_FLIPFLOP_SV
`define MECANISMO_FLIPPING_UNO_FLIPFLOP_SV

module mecanismo_flipping_uno_flipflop
    #(parameter N = 16)
        (   input clk, rst, input_f_bits,
            input [N - 1:0] input_activaciones,
            output [N - 1:0] salida_flip_flop_con_activaciones_procesadas);

    wire salida_flip_flop_con_bit_f;
    wire [N - 1:0] salida_flip_flop_activaciones_sin_procesar;
    wire [N - 1:0] salida_mecanismo_flipping;

    flipflop_uno u1 (
        .clk(clk),
        .rst(rst),
        .d(input_f_bits),
        .q(salida_flip_flop_con_bit_f)); // flip-flop de f_bit

    flipflop_uno_nbits #(N) u0 (
        .clk(clk),
        .rst(rst),
        .d(input_activaciones),
        .q(salida_flip_flop_activaciones_sin_procesar)); // flip-flop de la activacion

    mecanismo_flipping_uno #(.N(N)) u2 (
        .a(salida_flip_flop_activaciones_sin_procesar),
        .f(salida_flip_flop_con_bit_f),
        .b(salida_mecanismo_flipping)); // llamada al mecanismo flipping

    flipflop_uno_nbits #(N) u3 (
        .clk(clk),
        .rst(rst),
        .d(salida_mecanismo_flipping),
        .q(salida_flip_flop_con_activaciones_procesadas)); // introducir el resultado en b con otro flip-flop

endmodule

`endif // MECANISMO_FLIPPING_UNO_FLIPFLOP_SV