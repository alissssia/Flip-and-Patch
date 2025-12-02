module final_integration #(
    parameter N_WORDS = 64,//(1 << 20),
    parameter DATA_W = 16,
    parameter int ADDR_WIDTH = 21,
    parameter int ADDR_W = $clog2(N_WORDS),
    parameter M = 4
) (
    input logic clk,
    input logic reset,

    //input logic [ADDR_W-1:0] addr [M-1:0],

    // activation inputs (original and cache)
    input  logic [DATA_W-1:0] activation_org    [N_WORDS-1:0],
    input  logic [DATA_W-1:0] activation_cache_full  [N_WORDS-1:0], // to be introduced in the cache


    input logic start_reading,

    // fail scan control
    input logic start_scan,
    output logic scan_done,

    output logic f [N_WORDS-1:0], // too see f bits
    output logic p [N_WORDS-1:0], // too see p bits

    // mechanisms outputs
    output logic [DATA_W-1:0] flipped_out [N_WORDS-1:0],
    output logic [DATA_W-1:0] patched_out [N_WORDS-1:0],
    output logic [DATA_W-1:0] activation_final [N_WORDS-1:0],
    output logic [DATA_W-1:0] original_activation [M-1:0],
    output logic cache_write_finished,
    output logic finished,

    // counters
    output int unsigned count_f,
    output int unsigned count_p,
    output logic [$clog2(N_WORDS) - 1:0] dbg_idx [M - 1:0]
);

logic [1:0] rd_data;
logic all_done;

logic flipping_bit [N_WORDS - 1:0];
logic patching_bit [N_WORDS - 1:0];

testbench_fallos #(
    .N_WORDS(N_WORDS),
    .DATA_W(DATA_W),
    .ADDR_W(ADDR_W)
) rellenar_fallos (
    .clk(clk),
    .reset(reset),
    .start(start_scan),
    .rd_data(rd_data),
    .all_done(all_done),
    .flipping_bit(flipping_bit),
    .patching_bit(patching_bit)
);

assign scan_done = all_done;

always_comb begin
  int unsigned cf = 0, cp = 0;
  for (int i = 0; i < N_WORDS; i++) begin
    cf += (flipping_bit[i] ? 32'd1 : 32'd0);
    cp += (patching_bit[i] ? 32'd1 : 32'd0);
  end
  count_f = cf;
  count_p = cp;
end

// f y p assignment
genvar i;
    generate
        for (i = 0; i < N_WORDS; i++) begin
            assign f[i] = flipping_bit[i];
            assign p[i] = patching_bit[i];
        end
    endgenerate


// debug
/*generate
  genvar w;
  for (w = 0; w < N_WORDS; w++) begin
    assign flipped_out[w] = activation_org[w];   // por probar
    assign patched_out[w] = activation_org[w];
    assign activation_final[w] = activation_org[w];
  end
endgenerate*/

// Para que el C++ no se quede esperando:
assign cache_write_finished = 1'b1;
assign finished = 1'b1;



test_ensemble #(
    .N(DATA_W),
    .M(M),
    .ADDR_WIDTH(ADDR_WIDTH),
    .N_WORDS(N_WORDS)
) ensemble (
    .clk(clk),
    .reset(reset),
    .activation_org(activation_org),
    .activation_cache_full(activation_cache_full),
    .f(f),
    .p(p),
    .start_reading(start_reading),
    .flipped_global(flipped_out),
    .patched_global(patched_out),
    .final_global(activation_final),
    .original_activation(original_activation),
    .cache_write_finished(cache_write_finished),
    .finished(finished),
    .dbg_idx(dbg_idx)
);


endmodule