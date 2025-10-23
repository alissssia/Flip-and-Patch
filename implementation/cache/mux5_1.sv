`ifndef MUX5_1_SV
`define MUX5_1_SV
module mux5_1 #(parameter N = 16) (
    input logic [N-1:0] a,
    input logic [N-1:0] b,
    input logic [N-1:0] c,
    input logic [N-1:0] d,
    input logic [N-1:0] e,
    input logic [2:0] sel,
    output logic [N-1:0] eleccion
);
    always_comb begin
        case (sel)
            3'b000: eleccion = a;
            3'b001: eleccion = b;
            3'b010: eleccion = c;
            3'b011: eleccion = d;
            3'b100: eleccion = e;
            default: eleccion = '0; // Default case to avoid latches
        endcase
    end
endmodule

`endif // MUX5_1_SV
