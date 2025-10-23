module mux_selector_final #(
    parameter int N = 16,
    parameter int M = 16
) (
    input logic [N-1:0] a_original [M-1:0],
    input logic [N-1:0] a_flipped [M-1:0],
    input logic [N-1:0] a_patched [M-1:0],
    input logic f [M-1:0], // bit de flipping
    input logic p [M-1:0], // bit de patching
    output logic [N-1:0] selected [M-1:0]// salida seleccionada
);

    genvar i;
    generate
        for (i = 0; i < M; i++) begin
            always_comb begin
                if (p[i])
                    selected[i] = a_patched[i];
                else if (f[i])
                    selected[i] = a_flipped[i];
                else if (f[i] == 0 && p[i] == 0)
                    selected[i] = a_original[i];
                else
                    selected[i] = 16'hFFFF; // error case, should not happen
            end
        end
    endgenerate
endmodule