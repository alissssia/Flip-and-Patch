module test_ensemble #(
    parameter int N = 16,
    parameter int M = 4,
    parameter int ADDR_WIDTH = 21,
    parameter int N_WORDS = 64
) (
    input logic clk,
    input logic reset,

    // output of the ram (possibly incorrect)
    input logic [N - 1:0] activation_org [N_WORDS - 1:0],

    // content of the cache (to correct the incorrect from the ram)
    input logic [N - 1:0] activation_cache_full [N_WORDS - 1:0],

    // f and p bits
    input logic f [N_WORDS - 1:0],
    input logic p [N_WORDS - 1:0],

    // signals from testbench to process blocks
    input logic start_reading,

    // outputs
    output logic [N-1:0] flipped_global [N_WORDS-1:0],
    output logic [N-1:0] patched_global [N_WORDS-1:0],
    output logic [N-1:0] final_global [N_WORDS-1:0],
    output logic [N - 1:0] original_activation [M - 1:0],
    output logic cache_write_finished,
    output logic finished,
    output logic [$clog2(N_WORDS)-1:0] dbg_idx [M - 1:0]
);

    // results by blocks of flipping and patching
    /*logic [N-1:0] flipped_all  [N_WORDS-1:0];
    logic [N-1:0] patched_all  [N_WORDS-1:0];
    logic [N-1:0] final_all    [N_WORDS-1:0];*/
    logic [N - 1:0] flipped_out [M - 1:0];
    logic [N - 1:0] patched_out [M - 1:0];
    logic [N - 1:0] final_choice [M - 1:0];

    logic [N-1:0] flipped_all [N_WORDS-1:0];
    logic [N-1:0] patched_all [N_WORDS-1:0];
    logic [N-1:0] final_all [N_WORDS-1:0];

    // blocks for flipping
    logic [N - 1:0] activation_org_block [M - 1:0];
    logic f_block [M - 1:0];
    logic p_block [M - 1:0];
    // index
    /*logic [FILL_AW - 1:0] idx [M - 1:0];
    logic [FILL_AW - 1:0] addr_idx;

    for (genvar ch = 0; ch < M; ch++) begin
        always_comb begin
            idx[ch] = FILL_AW'(block_idk * M + ch);
            dbg_idx[ch] = idx[ch];
            if (int'(idx[ch]) < N_WORDS) begin
                activation_org_block[ch] = activation_org[idx[ch]];
                f_block[ch] = f[idx[ch]];
                p_block[ch] = p[idx[ch]];
            end else begin
                activation_org_block[ch] = '0;
                f_block[ch] = 1'b0;
                p_block[ch] = 1'b0;
            end
        end
    end*/
    for (genvar ch = 0; ch < M; ch++) begin : GEN_BLOCKS
        always_comb begin
            int unsigned global_idx = block_idk * M + ch;

            if (global_idx < N_WORDS) begin
                activation_org_block[ch] = activation_org[global_idx];
                f_block[ch]              = f[global_idx];
                p_block[ch]              = p[global_idx];
                dbg_idx[ch]              = global_idx[$clog2(N_WORDS)-1:0];
            end else begin
                activation_org_block[ch] = '0;
                f_block[ch] = 1'b0;
                p_block[ch] = 1'b0;
                dbg_idx[ch] = '0;
            end
        end
    end

    for (genvar ch = 0; ch < M; ch++) begin
        assign original_activation[ch] = activation_org_block[ch];
    end

    // first we do flipping
    /*flipping_mechanism_flipflop #(
        .N(N),
        .M(M)
    ) flip_inst (
        .clk(clk),
        .rst(reset),
        .input_f_bits(f_block),
        .input_activaciones(activation_org_block),
        .flipflop_output_processed_activations(flipped_out)
    );*/

    // to see the original activations

    /*for (genvar gi = 0; gi < M; gi = gi + 1) begin
        assign original_activation[gi] = activation_org[gi];
    end*/

    // cache control
    logic request;
    logic read_write;
    logic [ADDR_WIDTH - 1:0] address;
    logic [N - 1:0] activation_in;
    logic [$clog2(M) - 1:0] index;
    logic store_enable;
    logic valid;
    logic error;

    typedef enum logic [1:0] {
        RESET,
        LOAD_CACHE,
        IDLE,
        READ_CACHE // reading M words for patching
    } state_t;

    state_t state, next_state;

    // counter to fill the cache
    /*localparam int FILL_AW = (N_WORDS > 1) ? $clog2(N_WORDS) : 1;
    logic [FILL_AW - 1:0] fill_addr, next_fill_addr;*/
    //localparam logic [FILL_AW-1:0] NWORDS_U = N_WORDS[FILL_AW-1:0];
    int unsigned fill_addr, next_fill_addr;

    // number of blocks
    //localparam int NUM_BLOCKS = (N_WORDS + M - 1) / M;
    //localparam int BLK_AW = (NUM_BLOCKS > 1) ? $clog2(NUM_BLOCKS) : 1;
    //logic [BLK_AW - 1:0] block_idk, next_block_idk;
    int unsigned block_idk, next_block_idk;

    // index in the block
    //logic [$clog2(M) - 1:0] index_counter, next_index;
    int unsigned index_counter, next_index;

    // internal signal to indicate all processing is done
    logic finished_everything;

    // internal signal to know a block of M has finished processing
    logic block_done;

    // state register
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= RESET;
            fill_addr <= '0;
            block_idk <= '0;
            index_counter <= '0;
            cache_write_finished <= 1'b0;
            finished <= 1'b0;
        end else begin
            state <= next_state;
            fill_addr <= next_fill_addr;
            block_idk <= next_block_idk;
            index_counter <= next_index;

            // marking cache write finished
            if (state == LOAD_CACHE && next_state == IDLE) begin
                cache_write_finished <= 1'b1;
            end

            // marking all processing finished
            if (finished_everything) begin
                finished <= 1'b1;
            end
        end
    end

    int unsigned addr_idx;

    // state machine
    always_comb begin
        // default values
        next_state = state;
        next_fill_addr = fill_addr;
        next_block_idk = block_idk;
        next_index = index_counter;
        finished_everything = 1'b0;
        block_done = 1'b0;

        request = 1'b0;
        read_write = 1'b1; // default to read
        address = '0;
        activation_in = '0;
        index = index_counter[$clog2(M)-1:0];
        store_enable = 1'b0;
        addr_idx = '0;
        //addr_tmp = 0;

        case (state)
            RESET:
                begin
                    // variables as default
                    next_state = LOAD_CACHE;
                    next_fill_addr = '0;
                    next_block_idk = '0;
                    next_index = '0;
                end
            // 1st step: fill in the cache
            LOAD_CACHE:
                begin
                    request = 1'b1;
                    read_write = 1'b0; // write
                    address = fill_addr[ADDR_WIDTH-1:0];
                    activation_in = activation_cache_full[fill_addr];

                    if (fill_addr == N_WORDS - 1) begin
                        next_state = IDLE;
                    end else begin
                        next_fill_addr = fill_addr + 1;
                    end
                end
            // 2nd step: wait for start reading signal
            IDLE:
                begin
                    if (start_reading && cache_write_finished) begin
                        next_state = READ_CACHE;
                        next_block_idk = '0;
                        next_index = '0;
                    end
                end
            // 3rd step: read M words from cache for patching
            /*READ_CACHE:
                begin
                    request = 1'b1;
                    read_write = 1'b1; // read

                    // calculate address
                    //address = ADDR_WIDTH'(block_idk * M + index_counter);
                    /*addr_idx = block_idk * M + index_counter;
                    address = {{(ADDR_WIDTH - FILL_AW){1'b0}}, addr_idx};*/
                    /*addr_tmp = int'(block_idk) * M + int'(index_counter);
                    addr_idx = addr_tmp[FILL_AW-1:0];
                    address  = {{(ADDR_WIDTH - FILL_AW){1'b0}}, addr_idx};*/
                    /*addr_idx = block_idk * M + index_counter;
                    address = addr_idx[ADDR_WIDTH-1:0];

                    if (valid) begin
                        store_enable = 1'b1;
                        index = index_counter[$clog2(M)-1:0];

                        if (index_counter == M - 1) begin
                            next_index = '0;
                            block_done = 1'b1;
                            if (block_idk == ((N_WORDS + M - 1) / M) - 1) begin
                                finished_everything = 1'b1;
                                next_block_idk = block_idk;
                                next_state = READ_CACHE; // stay here
                            end else begin
                                next_block_idk = block_idk + 1;
                                next_state = READ_CACHE;
                            end
                        end else begin
                            next_index = index_counter + 1;
                            next_state = READ_CACHE;
                        end
                    end
                end*/
            READ_CACHE: begin
                // Para probar solo flipping, ignoramos la cache real
                request     = 1'b0;
                read_write  = 1'b1;
                address     = '0;
                activation_in = '0;

                // Siempre guardamos este ciclo
                store_enable = 1'b1;
                index        = index_counter[$clog2(M)-1:0];

                if (index_counter == M - 1) begin
                    next_index = '0;
                    block_done = 1'b1;

                    if (block_idk == ((N_WORDS + M - 1) / M) - 1) begin
                        finished_everything = 1'b1;
                        next_block_idk      = block_idk;
                        next_state          = READ_CACHE;  // o te quedas aquí
                    end else begin
                        next_block_idk = block_idk + 1;
                        next_state     = READ_CACHE;
                    end
                end else begin
                    next_index = index_counter + 1;
                    next_state = READ_CACHE;
                end
            end
            default:
                begin
                    next_state = RESET;
                    next_fill_addr = '0;
                    next_block_idk = '0;
                    next_index = '0;
                end
        endcase
    end

    // patching mechanism
    /*top_patching_final #(
        .N(N),
        .M(M)
        //.ADDR_WIDTH(ADDR_WIDTH)
    ) patch_inst (
        .clk(clk),
        .reset(reset),
        .request(request),
        .read_write(read_write),
        .address(address),
        .activation_in(activation_in),
        .p(p_block),
        .activation_org(activation_org_block),
        .index(index),
        .store_enable(store_enable),
        .chosen_activation(patched_out),
        .valid(valid),
        .error(error)
    );

    // final choice between original, flipped and patched
    mux_selector_final #(
        .N(N),
        .M(M)
    ) final_mux_inst (
        .a_original(activation_org_block),
        .a_flipped(flipped_out),
        .a_patched(patched_out),
        .f(f_block),
        .p(p_block),
        .selected(final_choice)
    );*/

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            // initialize outputs
            for (int i = 0; i < M; i++) begin
                flipped_all[i] <= '0;
                patched_all[i] <= '0;
                final_all[i] <= '0;
            end
        end else begin
            if (block_done) begin
                for (int i = 0; i < M; i++) begin
                    int unsigned gidx = block_idk * M + i;
                    if (gidx < N_WORDS) begin
                        flipped_all[gidx] <= flipped_out[i];
                        patched_all[gidx] <= patched_out[i];
                        final_all[gidx] <= final_choice[i];
                    end
                end
            end
        end
    end

    for (genvar k = 0; k < N_WORDS; k++) begin
        assign flipped_global[k] = flipped_all[k];
        assign patched_global[k] = patched_all[k];
        assign final_global[k] = final_all[k];
    end


    // DEBUG
    for (genvar ch = 0; ch < M; ch++) begin
        assign flipped_out[ch]  = activation_org_block[ch];
        assign patched_out[ch]  = activation_org_block[ch];
        assign final_choice[ch] = activation_org_block[ch];
    end


endmodule
