`ifndef MUX_SV
`define MUX_SV
module mux (input a, b, sel,
            output eleccion);
    assign eleccion = (sel) ? b : a;
endmodule

`endif
