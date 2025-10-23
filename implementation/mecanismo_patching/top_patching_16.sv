`ifndef TOP_PATCHING_16_SV
`define TOP_PATCHING_16_SV

module top_patching_16 #(
    parameter int N = 16, // N bits
    parameter int M = 16, // M activaciones
    parameter int ADDR_WIDTH = 21
) (
    input logic clk,
    input logic reset,
    input logic request,
    input logic read_write, // 1 = read, 0 = write
    input logic [ADDR_WIDTH-1:0] address,
    input logic [N-1:0] activation_in, // datos de entrada para escritura
    input logic p [M-1:0], // bits de patching
    input logic [N-1:0] activation_org [M-1:0], // datos de cache

    // señales para guardar en posicion i de  activacion_cache
    input  logic [$clog2(M)-1:0]     index,
    input  logic                     store_enable,

    output logic [N-1:0] chosen_activation [M-1:0], // datos de salida para lectura
    output logic valid,
    output logic error
);

    logic [N-1:0] activation_out; // valor leido desde la cache
    logic [N-1:0] activation_cache [M-1:0]; // array de activaciones cacheadas


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

    // valor de la cache en la posicion index en el ciclo que toca
    always_ff @(posedge clk) begin
        if (store_enable) begin
            activation_cache[index] <= activation_out;
        end
    end


    // aplicar mecanismo de patching
    mecanismo_patching_16 #(
        .N(N),
        .M(M)
    ) patching_unit (
        .a_org(activation_org), // activacion original
        .a_cache(activation_cache), // activacion cacheada
        .p(p), // bits de patching
        .b(chosen_activation) // devolucion de la activacion patchada
    );

endmodule

`endif // TOP_PATCHING_16_SV