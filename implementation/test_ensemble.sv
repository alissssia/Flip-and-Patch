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


    logic f_block [M - 1:0];
    logic p_block [M - 1:0];
    logic [N - 1:0] activation_org_block [M - 1:0];
    logic [N - 1:0] flipped_block [M - 1:0];
    logic [N - 1:0] patched_block [M - 1:0];
    logic [N - 1:0] final_choice [M - 1:0];

        // ==============================
    // Señales de control para PATCHING (FSM independiente)
    // ==============================
    typedef enum logic [1:0] {
        P_ST_RESET,
        P_ST_FILL,
        //P_ST_WAIT_READ,
        P_ST_READ
    } p_state_t;

    p_state_t p_state, p_next_state;

    // contador para llenar la cache de patching
    int unsigned p_fill_addr, p_next_fill_addr;  // 0..N_WORDS-1

    // contador para leer la cache de patching
    int unsigned p_read_addr, p_next_read_addr;  // 0..N_WORDS-1

    // interfaz hacia top_patching_final
    logic              p_request;
    logic              p_read_write;     // 0 = write, 1 = read
    logic [ADDR_WIDTH-1:0] p_address;
    logic [N-1:0]      p_activation_in;
    logic [$clog2(M)-1:0] p_index;
    logic              p_store_enable;
    logic              p_valid;
    logic              p_error;

    // salida del patching real (DE MOMENTO NO LA USAMOS EN EL MUX)
    logic [N-1:0] patched_from_cache [M - 1:0];

    // Memoria interna donde guardaremos, por dirección global,
    // el resultado "patcheado" que nos da top_patching_final
    logic [N-1:0] patched_mem [N_WORDS-1:0];

    // Bloque de activaciones y bits p SOLO para el patching
    logic [N-1:0] activation_org_patch [M - 1:0];
    logic         p_patch             [M - 1:0];


    for (genvar i = 0; i < M; i++) begin : GEN_ORIG_OUT
        assign original_activation[i] = activation_org_block[i];
    end

    localparam int N_BLOCK = N_WORDS / M;
    int unsigned base_idx;
    logic reading;

    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            reading <= 1'b0;
            base_idx <= '0;
        end else begin
            if (start_reading) begin
                reading <= 1'b1;
                base_idx <= '0;
            end else if (reading) begin
                if (base_idx + M < N_WORDS) begin
                    base_idx <= base_idx + M;
                end else begin
                    reading <= 1'b0;
                end
            end
        end
    end

    // ==============================
    // Registros de estado PATCHING
    // ==============================
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            p_state      <= P_ST_RESET;
            p_fill_addr  <= '0;
            p_read_addr  <= '0;
        end else begin
            p_state      <= p_next_state;
            p_fill_addr  <= p_next_fill_addr;
            p_read_addr  <= p_next_read_addr;
        end
    end

    // fill in the cache
    /*logic              filling;              // estamos llenando la cache
    int unsigned       fill_addr;            // 0..N_WORDS-1

    // señales del interfaz de top_patching_final
    logic              request;
    logic              read_write;           // 0=write, 1=read
    logic [ADDR_WIDTH-1:0] address;
    logic [N-1:0]      activation_in;
    logic [$clog2(M)-1:0] index;
    logic              store_enable;
    logic              valid;
    logic              error;

    // salida dummy del patching (todavía no la usamos)
    //logic [N-1:0] patched_from_cache [M-1:0];

    // FSM súper simple sólo para escritura
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            filling             <= 1'b1;
            fill_addr           <= '0;
            cache_write_finished <= 1'b0;
        end else begin
            if (filling) begin
                if (fill_addr == N_WORDS-1) begin
                    filling             <= 1'b0;
                    cache_write_finished <= 1'b1;
                end else begin
                    fill_addr <= fill_addr + 1;
                end
            end
        end
    end

    // Lógica combinacional para el interfaz de patching mientras llenamos
    always_comb begin
        // por defecto, interfaz desactivada
        request       = 1'b0;
        read_write    = 1'b0;
        address       = '0;
        activation_in = '0;
        index         = '0;
        store_enable  = 1'b0;

        if (filling) begin
            request       = 1'b1;
            read_write    = 1'b0; // write
            address       = fill_addr[ADDR_WIDTH-1:0];
            activation_in = activation_cache_full[fill_addr];
            // index/store_enable no se usan aún
        end
    end*/


    for (genvar i = 0; i < M; i++) begin
        assign activation_org_block[i] = activation_org[base_idx + i];
        assign f_block[i] = f[base_idx + i];
        assign p_block[i] = p[base_idx + i];

        // patched_block ahora viene de la memoria interna rellenada por el patching
        assign patched_block[i] = patched_mem[base_idx + i];

        // Salida del mecanismo -> guardamos en flipped_global
        always_ff @(posedge clk or posedge reset) begin
            if (reset) begin
                flipped_global[base_idx + i] <= '0;
                patched_global[base_idx + i] <= '0;
                final_global  [base_idx + i] <= '0;
                dbg_idx[i] <= '0;
            end else if (reading) begin
                flipped_global[base_idx + i] <= flipped_block[i];
                patched_global[base_idx + i] <= patched_block[i];
                final_global  [base_idx + i] <= final_choice[i];
                dbg_idx[i] <= base_idx[$clog2(N_WORDS)-1:0] + i[$clog2(N_WORDS)-1:0];  // para debug
            end
        end
    end

        // ==============================
    // FSM del patching (llena cache y luego la lee)
    // NO afecta todavía a patched_block[] ni a las salidas globales
    // ==============================
    always_comb begin
        // valores por defecto
        p_next_state      = p_state;
        p_next_fill_addr  = p_fill_addr;
        p_next_read_addr  = p_read_addr;

        p_request       = 1'b0;
        p_read_write    = 1'b1;      // por defecto: lectura
        p_address       = '0;
        p_activation_in = '0;
        p_index         = '0;
        p_store_enable  = 1'b0;

        case (p_state)
            // -------------------------
            P_ST_RESET: begin
                p_next_state     = P_ST_FILL;
                p_next_fill_addr = '0;
                p_next_read_addr = '0;
            end

            // -------------------------
            // FASE 1: llenar la cache de patching con activation_cache_full
            // -------------------------
            P_ST_FILL: begin
                p_request       = 1'b1;
                p_read_write    = 1'b0; // write
                p_address       = p_fill_addr[ADDR_WIDTH-1:0];
                p_activation_in = activation_cache_full[p_fill_addr];

                if (p_fill_addr == N_WORDS-1) begin
                    p_next_state = P_ST_READ;
                end else begin
                    p_next_fill_addr = p_fill_addr + 1;
                end
            end

            // -------------------------
            // FASE 2: esperar a que empiece la lectura global
            // -------------------------
            /*P_ST_WAIT_READ: begin
                if (start_reading) begin
                    p_next_state     = P_ST_READ;
                    p_next_read_addr = '0;
                end
            end*/

            // -------------------------
            // FASE 3: leer cache de patching secuencialmente
            // (1 dirección por ciclo; cuando valid=1, indicamos index y store_enable)
            // -------------------------
            /*P_ST_READ: begin
                p_request    = 1'b1;
                p_read_write = 1'b1; // read
                p_address    = p_read_addr[ADDR_WIDTH-1:0];

                if (p_valid) begin
                    p_store_enable = 1'b1;
                    // asociamos esta lectura a un canal del bloque
                    p_index        = p_read_addr[$clog2(M)-1:0]; // p_read_addr % M

                    // avanzamos dirección
                    if (p_read_addr == N_WORDS-1) begin
                        // nos quedamos aquí "parados"
                        p_next_state     = P_ST_READ;
                        p_next_read_addr = p_read_addr;
                    end else begin
                        p_next_read_addr = p_read_addr + 1;
                    end
                end
            end*/
            P_ST_READ: begin
                p_request    = 1'b1;
                p_read_write = 1'b1; // read
                p_address    = p_read_addr[ADDR_WIDTH-1:0];

                // De momento, SIEMPRE escribimos una vez por dirección
                p_store_enable = 1'b1;
                p_index        = p_read_addr[$clog2(M)-1:0]; // p_read_addr % M

                if (p_read_addr == N_WORDS-1) begin
                    p_next_state     = P_ST_READ;    // nos quedamos aquí congelados
                    p_next_read_addr = p_read_addr;
                end else begin
                    p_next_read_addr = p_read_addr + 1;
                end
            end



            default: begin
                p_next_state      = P_ST_RESET;
                p_next_fill_addr  = '0;
                p_next_read_addr  = '0;
            end
        endcase
    end

    // ==============================
    // Construir el bloque que ve el patching según p_read_addr
    // ==============================
    always_comb begin
        // Dirección global que estamos procesando en el patching
        int unsigned gaddr;
        logic [$clog2(M)-1:0] lane;

        gaddr = p_read_addr;
        lane  = gaddr[$clog2(M)-1:0];  // gaddr % M (M potencia de 2)
        // Por defecto todo a 0
        for (int ch = 0; ch < M; ch++) begin
            activation_org_patch[ch] = '0;
            p_patch[ch]             = 1'b0;
        end

        if (gaddr < N_WORDS) begin
            // Solo llenamos UN lane con la palabra que toca
            activation_org_patch[lane] = activation_org[gaddr];
            p_patch[lane]              = p[gaddr];
        end
    end

    // finished signal
    assign finished = ~reading & cache_write_finished;

    // first we do flipping
    /*flipping_mechanism_flipflop #(
        .N(N),
        .M(M)
    ) flip_inst (
        .clk(clk),
        .rst(reset),
        .input_f_bits(f_block),
        .input_activaciones(activation_org_block),
        .flipflop_output_processed_activations(flipped_block)
    );*/
    flipping_mechanism_block #(
        .N(N),
        .M(M)
    ) flip_inst (
        .a(activation_org_block),  // activaciones de entrada por bloque
        .f(f_block),               // bits f por bloque
        .b(flipped_block)          // activaciones flippadas
    );


    // then we do patching
    top_patching_final #(
        .N(N),
        .M(M)
    ) patch_inst (
        .clk              (clk),
        .reset            (reset),
        .request          (p_request),
        .read_write       (p_read_write),
        .address          (p_address),
        .activation_in    (p_activation_in),
        .p                (p_patch),
        .activation_org   (activation_org_patch),
        .index            (p_index),
        .store_enable     (p_store_enable),
        .chosen_activation(patched_from_cache), // dummy por ahora
        .valid            (p_valid),
        .error            (p_error)
    );
    

    // final choice
    mux_selector_final #(
        .N(N),
        .M(M)
    ) final_mux_inst (
        .a_original(activation_org_block),
        .a_flipped(flipped_block),
        .a_patched(patched_block),
        .f(f_block),
        .p(p_block),
        .selected(final_choice)
    );

        // ==========================================
    // Escribir la memoria patched_mem desde top_patching_final
    // ==========================================
    always_ff @(posedge clk or posedge reset) begin
        if (reset) begin
            for (int i = 0; i < N_WORDS; i++) begin
                patched_mem[i] <= '0;
            end
        end
        else begin
            // La FSM de patching activa p_store_enable cuando p_valid=1
            //if (p_store_enable && p_valid) begin
            if (p_store_enable) begin
                // p_read_addr = dirección global que estamos leyendo de la cache
                // p_index     = lane dentro del bloque (0..M-1)
                patched_mem[p_read_addr] <= patched_from_cache[p_index];
            end
        end
    end



endmodule