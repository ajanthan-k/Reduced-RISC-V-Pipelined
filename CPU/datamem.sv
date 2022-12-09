module datamem #(
    parameter ADDRESS_WIDTH = 32,
              DATA_WIDTH = 32
)(
    input logic clk,
    input logic [ADDRESS_WIDTH-1:0] A,    
    input logic [ADDRESS_WIDTH-1:0] WD,
    input logic WE,

    output logic [DATA_WIDTH-1:0] RD

);

    logic [DATA_WIDTH-1:0] ram_array [2**12-1:0];

    always_comb begin
        RD = ram_array[A];
    end

    initial begin
        $readmemh("data.hex", ram_array); //read from this hex file
    end

    always_ff @ (posedge clk) begin
        if (WE)  ram_array[A] <= WD;
    end

endmodule
