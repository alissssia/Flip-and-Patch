module final_integration #(
    parameter N_WORDS = 64,//(1 << 20),
    parameter DATA_W = 16,
    parameter int ADDR_W = $clog2(N_WORDS),
    parameter M = 4
) (
    input logic clk,
    input logic reset,

    //input logic [ADDR_W-1:0] addr [M-1:0],

    // activation inputs (M at a time)
    input  logic [DATA_W-1:0] activation_org    [M-1:0],
    input  logic [DATA_W-1:0] activation_cache  [M-1:0], // esto habra que cambiarlo


    input logic start_reading,

    // fail scan control
    input logic start_scan,
    output logic scan_done,

    output logic f [N_WORDS-1:0], // too see f bits
    output logic p [N_WORDS-1:0], // too see p bits

    // mechanisms outputs
    output logic [DATA_W-1:0] flipped_out [M-1:0],
    output logic [DATA_W-1:0] patched_out [M-1:0],
    output logic [DATA_W-1:0] activation_final [M-1:0],
    output logic f_m [M-1:0],
    output logic p_m [M-1:0],

    // counters
    output int unsigned count_f,
    output int unsigned count_p
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

// f y p de tamaño m
genvar i;
    generate
        for (i = 0; i < N_WORDS; i++) begin
            assign f[i] = flipping_bit[i];
            assign p[i] = patching_bit[i];
        end
    endgenerate


// to manage mechanisms in groups of M
logic [ADDR_W:0] addr_mechanism;
always_ff @(posedge clk or posedge reset) begin
    if (reset) begin
        addr_mechanism <= '0;
    end else if (!scan_done) begin
        addr_mechanism <= '0;
    end else if (start_reading) begin
        if (addr_mechanism + M < N_WORDS) begin
            addr_mechanism <= addr_mechanism + M;
        end else begin
            addr_mechanism <= '0;
        end
    end
end

// f and p in groups of M to feed mechanisms
logic f_mechanism [M-1:0];
logic p_mechanism [M-1:0];

generate
    for (i = 0; i < M; i++) begin
        assign f_mechanism[i] = f[addr_mechanism + i];
        assign p_mechanism[i] = p[addr_mechanism + i];
    end
endgenerate

assign f_m = f_mechanism;
assign p_m = p_mechanism;

test_mechanisms #(
    .N(DATA_W),
    .M(M)
) test_mechanisms (
    .clk(clk),
    .reset(reset),
    .activation_org(activation_org),
    .activation_cache(activation_cache),
    .f(f_mechanism),
    .p(p_mechanism),
    .start_reading(start_reading),
    .flipped_out(flipped_out),
    .patched_out(patched_out),
    .activation_final(activation_final)
);


endmodule