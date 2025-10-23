`ifndef FLIPFLOP_MUX_SV
`define FLIPFLOP_MUX_SV
module mux (input a, b, sel,
            output eleccion);
    assign eleccion = (sel) ? b : a;
endmodule

`endif
