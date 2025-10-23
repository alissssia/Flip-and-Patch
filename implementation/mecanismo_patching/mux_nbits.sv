`ifndef MUX_NBITS_SV
`define MUX_NBITS_SV
module mux_nbits #(
    parameter int N = 16  // Ancho por defecto: 1 bit
) (
    input  logic [N-1:0] a,
    input  logic [N-1:0] b,
    input logic sel,
    output logic [N-1:0] eleccion
);
    assign eleccion = (sel) ? b : a; // sel 1 selecciona b, sel 0 selecciona a
endmodule

`endif
