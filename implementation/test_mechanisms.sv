module test_mechanisms #(
    parameter N = 16,
    parameter M = 4
) (
    input  logic clk,
    input  logic reset,
    input  logic [N-1:0] activation_org    [M-1:0],
    input  logic [N-1:0] activation_cache  [M-1:0], // datos a meter en la cache
    input  logic f [M-1:0],
    input  logic p [M-1:0],
    input  logic start_reading, // para cargar otro bloque de M elementos en la cache
    output logic [N-1:0] flipped_out [M-1:0],
    output logic [N-1:0] patched_out [M-1:0],
    output logic [N-1:0] activation_final  [M-1:0]
);

    // instancia del mecanismo de flipping
    mecanismo_flipping_flipflop #(
        .N(N), .M(M)
    ) flip_inst (
        .clk(clk),
        .rst(reset),
        .input_f_bits(f),
        .input_activaciones(activation_org),
        .salida_flip_flop_con_activaciones_procesadas(flipped_out)
    );

    // Control de la cache
    logic request;
    logic read_write;
    logic [20:0] address;
    logic [N-1:0] activation_in;
    logic [$clog2(M)-1:0] index;
    logic store_enable;
    logic valid;
    logic error;

    typedef enum logic [1:0] {
        RESET,
        LOAD_CACHE,
        READ_CACHE
    } state_t;

    state_t state, next_state;
    logic [$clog2(M)-1:0] index_counter, next_index;
    localparam LAST_INDEX = M - 1;
    logic done_loading;
    logic [31:0] ciclos;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= RESET;
            index_counter <= 0;
            ciclos <= 0;
            done_loading <= 1'b0;
        end else begin
            state <= next_state;
            index_counter <= next_index;
            ciclos <= ciclos + 1;
            if (state == LOAD_CACHE && next_state == READ_CACHE)
                done_loading <= 1;
        end
    end

    always_comb begin
        next_state     = state;
        next_index     = index_counter;

        request        = 1'b1;
        address        = { {(21 - $clog2(M)){1'b0}}, index_counter };
        index          = index_counter;
        store_enable   = 1'b0;
        read_write     = 1'b0;
        activation_in  = '0;

        case (state)
            RESET: begin
                next_state = LOAD_CACHE;
            end

            LOAD_CACHE: begin
                store_enable  = 1'b1;
                read_write    = 1'b0; // escritura
                activation_in = activation_cache[index_counter];

                if (index_counter < $clog2(M)'(LAST_INDEX)) begin
                    next_index = index_counter + 1;
                    next_state = LOAD_CACHE;
                end else begin
                    if (start_reading && !done_loading) begin
                        next_index = 0;
                        next_state = READ_CACHE;
                    end else begin
                        next_index = 0;
                        next_state = LOAD_CACHE;
                    end
                end
            end

            READ_CACHE: begin
                read_write    = 1'b1; // lectura
                store_enable  = 1'b0;

                if (index_counter < $clog2(M)'(LAST_INDEX))
                    next_index = index_counter + 1;
                else
                    next_index = 0;

                next_state = READ_CACHE;
            end

            default: begin
                next_state = RESET;
                next_index = 0;
            end
        endcase
    end

    // Instancia del mecanismo de patching final
    top_patching_final #(
        .N(N), .M(M)
    ) patch_inst (
        .clk(clk),
        .reset(reset),
        .request(request),
        .read_write(read_write),
        .address(address),
        .activation_in(activation_in),
        .p(p),
        .activation_org(activation_org),
        .index(index),
        .store_enable(store_enable),
        .chosen_activation(patched_out),
        .valid(valid),
        .error(error)
    );

    // Selector final
    mux_selector_final #(
        .N(N),
        .M(M)
    ) selector_inst (
        .a_original(activation_org),
        .a_flipped(flipped_out),
        .a_patched(patched_out),
        .f(f),
        .p(p),
        .selected(activation_final)
    );

endmodule
