module datamem #(
    parameter EXT_WIDTH = 32,   //width if external signals
              DATA_WIDTH = 8    //Width of data in datamem
)(
    input logic clk,
    input logic [EXT_WIDTH-1:0] A,    
    input logic [EXT_WIDTH-1:0] WD,
    input logic WE,

    output logic [EXT_WIDTH-1:0] RD
);

    logic [DATA_WIDTH-1:0] data_mem_array [32'h1FFFF : 32'h0];

    //reading from memory - only implement load byte
    always_comb begin
        RD = {{24{1'b0}}, data_mem_array[A]};
    end

    //read appropriate memory file
    initial begin   
        $readmemh("sine.mem", data_mem_array, 32'h00010000, 32'h0001FFFF);  
    end

    //writing to memory - only implementing store byte
    always_ff @ (posedge clk) begin
        if (WE)  
            data_mem_array[A] <= WD[7:0];
    end

endmodule
