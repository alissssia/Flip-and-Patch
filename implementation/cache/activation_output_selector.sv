`ifndef ACTIVATION_OUTPUT_SELECTOR_SV
`define ACTIVATION_OUTPUT_SELECTOR_SV

/*
* Módulo activation_output_selector: selecciona la activación de la vía correcta
*/
module activation_output_selector #(
    parameter NWAYS = 5,            // Número de vías
    parameter WORD_SIZE = 16        // Tamaño de palabra
)(
    input wire [WORD_SIZE-1:0] data_out_0,
    input wire [WORD_SIZE-1:0] data_out_1,
    input wire [WORD_SIZE-1:0] data_out_2,
    input wire [WORD_SIZE-1:0] data_out_3,
    input wire [WORD_SIZE-1:0] data_out_4,
    input wire [$clog2(NWAYS)-1:0] valid_way,
    input wire enable,
    output logic [WORD_SIZE-1:0] activation_out
);


    wire [WORD_SIZE -1:0] mux_out;
    mux5_1 #(
        .N(WORD_SIZE)
    ) mux (
        .a(data_out_0),
        .b(data_out_1),
        .c(data_out_2),
        .d(data_out_3),
        .e(data_out_4),
        .sel(valid_way),
        .eleccion(mux_out)
    );
    always_comb begin
        if (enable) begin
            activation_out = mux_out; // Asignar salida de datos de la vía seleccionada
        end else begin
            activation_out = '1; // si no se habilita la salida, valor por defecto todos los bits a 1
        end
    end
endmodule

`endif // ACTIVATION_OUTPUT_SELECTOR_SV
