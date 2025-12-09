`ifndef MUX_NBITS_SV
`define MUX_NBITS_SV
module mux_nbits #(
    parameter int N = 16  // Default width: 16 bits
) (
    input  logic [N-1:0] a,
    input  logic [N-1:0] b,
    input logic sel,
    output logic [N-1:0] eleccion
);
    assign eleccion = (sel) ? b : a; // sel 1 selects b, sel 0 selects a
endmodule

`endif
