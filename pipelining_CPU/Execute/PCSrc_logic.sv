module PCSrc_logic ( //delete this later, add to top file
    input JumpE;
    input BranchE;
    input ZeroE;

    output PCSrcE;
);

assign PCSrc = JumpE | (BranchE & ZeroE); //Zero is HIGH when branches are not equal
    
endmodule