
module extend #(
    parameter WIDTH = 32
) (
    //interface signals
    input   logic   [WIDTH-1:0]  Instr,                     //32 bit instruction
    input   logic   [2:0]        ImmSrc,                    //Control signal
    output  logic   [WIDTH-1:0]  ImmOp                      //32 bit out
);

always_comb begin
    casez(ImmSrc)
        3'b000: ImmOp = { {20{Instr[31]}}, Instr[31:20] };                                               //I-type when ImmSrc = 000
        3'b001: ImmOp = { {20{Instr[31]}}, Instr[31:25], Instr[11:7] };                                  //S-type when ImmSrc = 001
        3'b010: ImmOp = { {20{Instr[31]}}, Instr[7], Instr[30:25], Instr[11:8], 1'b0 };                  //B-type when ImmSrc = 010
        3'b011: ImmOp = { {11{Instr[31]}}, Instr[19:12], Instr[20], Instr[31:25], Instr[24:21], 1'b0 };  //J-type when ImmSrc = 011
        3'b100: ImmOp = { Instr[31:12], {12{1'b0}} };                                                    //U-type when ImmSrc = 100
        default:ImmOp = 0;
    endcase
end

endmodule
