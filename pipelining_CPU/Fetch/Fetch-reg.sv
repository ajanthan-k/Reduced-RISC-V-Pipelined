module Fetch_reg #(
    parameter WIDTH = 32
) (
    input clk;
    input logic [WIDTH-1:0] InstrF;
    input logic [WIDTH-1:0] PCF;
    input logic [WIDTH-1:0] PCPlus4F;

    output logic [WIDTH-1:0] InstrD;
    output logic [WIDTH-1:0] PCD;
    output logic [WIDTH-1:0] PCPlus4D;
);

always_ff @(posedge clk) begin
    InstrF <= InstrD;
    PCF <= PCD;
    PCPlus4F <= PCPlus4D;
end
    
endmodule
