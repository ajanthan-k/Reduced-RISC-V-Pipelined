module instrmem #(
    parameter D_WIDTH = 8,
              EXT_WIDTH = 32 
) (
    input logic [EXT_WIDTH-1:0] A,
    output logic [EXT_WIDTH-1:0] RD 
);

logic [D_WIDTH-1:0] rom_array [32'hBFC00FFF : 32'hBFC00000]; 

//Switch to read appropriate instr memory
initial begin
    $readmemh("F1Program.hex", rom_array); 
    //$readmemh("pdf.hex", rom_array); 
end

assign RD = {rom_array [A + 3], rom_array [A + 2], rom_array [A + 1], rom_array [A]};

endmodule
