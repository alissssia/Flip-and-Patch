
module top_patching_uno #(
    parameter int N = 16,
    parameter int ADDR_WIDTH = 21
) (
    input logic clk,
    input logic reset,
    input logic request,
    input logic read_write, // 1 = read, 0 = write
    input logic [ADDR_WIDTH-1:0] address,
    input logic [N-1:0] activation_in, // datos de entrada para escritura
    input logic p,
    input logic [N-1:0] activation_org, // datos de cache
    output logic [N-1:0] chosen_activation, // datos de salida para lectura
    output logic valid,
    output logic error
);

    logic [N-1:0] activation_out;

    // instancia cache
    cache_tfg patch_cache (
        .clk(clk),
        .reset(reset),
        .address(address),
        .read_write(read_write),
        .activation_in(activation_in),
        .request(request),
        .activation_out(activation_out),
        .valid(valid),
        .error(error)
    );

    // instancia mecanismo de patching
    mecanismo_patching_uno #(
        .N(N)
    ) patching_unit (
        .a_org(activation_org), // activacion original
        .a_cache(activation_out), // activacion cacheada
        .p(p), // bit de patching
        .b(chosen_activation) // devolucion de la activacion patchada
    );

endmodule