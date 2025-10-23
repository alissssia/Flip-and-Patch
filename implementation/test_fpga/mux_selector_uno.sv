module mux_selector_uno #(
    parameter int N = 16
) (
    input logic [N-1:0] a_original,
    input logic [N-1:0] a_flipped,
    input logic [N-1:0] a_patched,
    input logic f, // bit de flipping
    input logic p, // bit de patching
    output logic [N-1:0] selected // salida seleccionada
);

    always_comb begin
        if (p)
            selected = a_patched; // si p es 1, selecciona a_flipped
        else if (f)
            selected = a_flipped; // si f es 1, selecciona a_flipped
        else if (f == 0 && p == 0)
            selected = a_original; // si ambos son 0, selecciona a_original
        else
            selected = 16'hFFFF; // caso de error, no debería ocurr
    end

endmodule