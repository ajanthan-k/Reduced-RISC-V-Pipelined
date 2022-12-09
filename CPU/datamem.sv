module datamem #(
    parameter EXT_WIDTH = 32, //width if external signals
              DATA_WIDTH = 8, //Width of data in datamem
              MEM_WIDTH = 12 //according to mem map
)(
    input logic clk,
    input logic [EXT_WIDTH-1:0] A,    
    input logic [EXT_WIDTH-1:0] WD,
    input logic WE,

    output logic [EXT_WIDTH-1:0] RD

);

    logic [DATA_WIDTH-1:0] data_mem_array [2**MEM_WIDTH-1:0];

    always_comb begin
        RD[7:0] = data_mem_array[A];
        RD[15:8] = data_mem_array[A+1];
        RD[23:16] = data_mem_array[A+2];
        RD[EXT_WIDTH-1:24] = data_mem_array[A+3];
    end

    initial begin
         $readmemh("data.hex", data_mem_array); //read from this hex file
    end

    always_ff @ (posedge clk) begin
        if (WE)  
            data_mem_array[A] <= WD[7:0];
            data_mem_array[A+1] <= WD[15:8];
            data_mem_array[A+2] <= WD[23:16];
            data_mem_array[A+3] <= WD[EXT_WIDTH-1:24];
    end

endmodule
