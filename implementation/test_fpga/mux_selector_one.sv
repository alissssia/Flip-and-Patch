module mux_selector_one #(
    parameter int N = 16
) (
    input logic [N-1:0] a_original,
    input logic [N-1:0] a_flipped,
    input logic [N-1:0] a_patched,
    input logic f, // flipping bit
    input logic p, // patching bit
    output logic [N-1:0] selected // selected output
);

    always_comb begin
        if (p)
            selected = a_patched; // if p is 1, select a_patched
        else if (f)
            selected = a_flipped; // if f is 1, select a_flipped
        else if (f == 0 && p == 0)
            selected = a_original; // if both are 0, select a_original
        else
            selected = 16'hFFFF; // error case, should not occur
    end

endmodule