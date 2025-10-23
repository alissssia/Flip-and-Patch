`ifndef HIT_LOGIC_SV
`define HIT_LOGIC_SV
/*
* Módulo hit_logic: calcula el hit_mask y la vía válida comparando tags
*/

module hit_logic #(
    parameter int NWAYS = 5, // Número de vías
    parameter int TAG_WIDTH = 13 // Ancho del tag
) (
    input logic [NWAYS - 1:0] valid_bits, // Vías válidas
    input logic [TAG_WIDTH - 1:0] tags_outs [NWAYS -1:0], // salidas de los tags de cada via
    input logic [TAG_WIDTH - 1:0] address_tag, // tag de la dirección de acceso
    output logic [NWAYS - 1:0] hit_mask, // Máscara de hit
    output logic [$clog2(NWAYS) - 1:0] valid_way // Vía que ha hecho hit
);

    always_comb begin
        valid_way = 3'b111; // Inicializar vía válida
        for (int i = 0; i < NWAYS; i++) begin
            hit_mask[i] = valid_bits[i] && (tags_outs[i] == address_tag); // Comparar tag y vía válida
            if (hit_mask[i]) begin
                valid_way = $clog2(NWAYS)'(i); // Asignar vía válida si hay hit
            end
        end
        if (valid_way == 3'b111) begin
            // no deberia pasar nunca, pero si no hay hit, devuelve una vía inválida
        end
    end
endmodule

`endif // HIT_LOGIC_SV