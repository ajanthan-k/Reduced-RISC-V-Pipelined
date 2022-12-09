module register #(
    parameter ADDRESS_WIDTH = 5,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] A1,    
    input logic [ADDRESS_WIDTH-1:0] A2,
    input logic [ADDRESS_WIDTH-1:0] A3,

    input logic WE3,
    input logic [DATA_WIDTH-1:0] WD3,

    output logic [DATA_WIDTH-1:0] a0,
    output logic [DATA_WIDTH-1:0] RD1,
    output logic [DATA_WIDTH-1:0] RD2

);

    logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];
//assign ram_array[5'b00000] = {DATA_WIDTH{1'b0}};
    always_comb begin
        RD1 = ram_array[A1];
        RD2 = ram_array [A2];
    end

    initial begin
        for (int i = 0; i< $size(ram_array); i++) begin
            ram_array[i] = 32'b0;
        end
    end

    always_ff @ (posedge clk) begin
        if (WE3)  ram_array[A3] <= WD3;
        ram_array[0] <= 32'b0;
    end

    assign a0 = ram_array[10];

endmodule
