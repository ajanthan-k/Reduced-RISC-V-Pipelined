module ALU #(
    parameter 
              DATA_WIDTH = 32
)(
    input logic [DATA_WIDTH-1:0] ALUop1,
    input logic ALUsrc,
    input logic [DATA_WIDTH-1:0] regOp2,
    input logic [DATA_WIDTH-1:0] ImmOp,
    input logic [2:0] ALUctrl,
    
    output logic [DATA_WIDTH-1:0] ALUout,
    output logic Zero

);
    logic [DATA_WIDTH-1:0] ALUop2;
    assign ALUop2 = ALUsrc ? ImmOp : regOp2;

    always_comb begin
    
        casez (ALUctrl)
           3'b000:  ALUout = ALUop1 + ALUop2;
       
           3'b001:  begin
            ALUout = ALUop1 - ALUop2;
            Zero = (ALUout == 0) ? 1'b1 : 1'b0;
           end
           3'b010:  ALUout = 32'b0; 
           
           3'b011:  ALUout = 32'b0;

           3'b100:  ALUout = 32'b0;
           3'b110:  ALUout = 32'b0;
           3'b101:  ALUout = 32'b0;

           default: ALUout = 0;
    
        
         endcase
     end
     
     //assign Zero = (ALUop1 == ALUop2) ? 1'b1 : 1'b0; //only for bne - needs overhaul
     // Zero is HIGH when branches are equal
     //assign Zero = (ALUout == 0) ? 1'b1 : 1'b0; //Zero = 1, when alu operation output = 0

endmodule
