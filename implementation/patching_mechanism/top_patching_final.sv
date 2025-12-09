

module top_patching_final #(
    parameter int N = 16, // N bits
    parameter int M = 16, // M activacions
    parameter int ADDR_WIDTH = 21
) (
    input logic clk,
    input logic reset,
    input logic request,
    input logic read_write, // 1 = read, 0 = write
    input logic [ADDR_WIDTH-1:0] address,
    input logic [N-1:0] activation_in, // input data to write
    input logic p [M-1:0], // patching bits
    input logic [N-1:0] activation_org [M-1:0], // cache data

    // signals to store in position i of activation_cache
    input  logic [$clog2(M)-1:0]     index,
    input  logic                     store_enable,

    output logic [N-1:0] chosen_activation [M-1:0], // output data for reading
    output logic valid,
    output logic error
);

    logic [N-1:0] activation_out; // value read from cache
    logic [N-1:0] activation_cache [M-1:0]; // array of cached activations


    // cache instance
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

    // value of the cache at position index in the corresponding cycle
    always_ff @(posedge clk) begin
        if (store_enable) begin
            activation_cache[index] <= activation_in;
        end
    end

    logic [N-1:0] patched_result [M-1:0];
    // apply patching mechanism
    mecanismo_patching_16 #(
        .N(N),
        .M(M)
    ) patching_unit (
        .a_org(activation_org), // original activation
        .a_cache(activation_cache), // cached activation
        .p(p), // patching bits
        .b(patched_result) // patched activation output
    );

    generate
        genvar i;
        for (i = 0; i < M; i++) begin
            always_comb begin
                if (read_write) begin
                    chosen_activation[i] = patched_result[i];
                end else begin
                    chosen_activation[i] = 16'hBEBA;
                end
            end
        end
    endgenerate

endmodule