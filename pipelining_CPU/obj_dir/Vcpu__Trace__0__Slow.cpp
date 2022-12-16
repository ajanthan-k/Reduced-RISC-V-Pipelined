// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+95,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+95,"a0", false,-1, 31,0);
    tracep->declBit(c+2,"PCSrcE", false,-1);
    tracep->declBus(c+3,"PCTargetE", false,-1, 31,0);
    tracep->declBus(c+90,"PCF", false,-1, 31,0);
    tracep->declBus(c+91,"InstrF", false,-1, 31,0);
    tracep->declBus(c+92,"PCPlus4F", false,-1, 31,0);
    tracep->declBit(c+4,"RegWriteD", false,-1);
    tracep->declBus(c+5,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+6,"MemWriteD", false,-1);
    tracep->declBit(c+7,"JumpD", false,-1);
    tracep->declBit(c+8,"BranchD", false,-1);
    tracep->declBus(c+9,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+10,"ALUSrcD", false,-1);
    tracep->declBit(c+11,"JALRctrlD", false,-1);
    tracep->declBus(c+96,"RD1D", false,-1, 31,0);
    tracep->declBus(c+97,"RD2D", false,-1, 31,0);
    tracep->declBus(c+12,"PCD", false,-1, 31,0);
    tracep->declBus(c+13,"RdD", false,-1, 4,0);
    tracep->declBus(c+14,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+15,"PCPlus4D", false,-1, 31,0);
    tracep->declBit(c+16,"flush", false,-1);
    tracep->declBit(c+17,"RegWriteE", false,-1);
    tracep->declBus(c+18,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBus(c+20,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+21,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+23,"PCPlus4E", false,-1, 31,0);
    tracep->declBit(c+24,"RegWriteM", false,-1);
    tracep->declBus(c+25,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+26,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+27,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+28,"RdM", false,-1, 4,0);
    tracep->declBus(c+29,"PCPlus4M", false,-1, 31,0);
    tracep->declBit(c+30,"RegWriteW", false,-1);
    tracep->declBus(c+31,"RdW", false,-1, 4,0);
    tracep->declBus(c+32,"ResultW", false,-1, 31,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+16,"flush", false,-1);
    tracep->declBus(c+91,"InstrF", false,-1, 31,0);
    tracep->declBus(c+90,"PCF", false,-1, 31,0);
    tracep->declBus(c+92,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+31,"RdW", false,-1, 4,0);
    tracep->declBus(c+32,"ResultW", false,-1, 31,0);
    tracep->declBit(c+30,"RegWriteW", false,-1);
    tracep->declBit(c+4,"RegWriteD", false,-1);
    tracep->declBus(c+5,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+6,"MemWriteD", false,-1);
    tracep->declBit(c+7,"JumpD", false,-1);
    tracep->declBit(c+8,"BranchD", false,-1);
    tracep->declBus(c+9,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+10,"ALUSrcD", false,-1);
    tracep->declBit(c+11,"JALRctrlD", false,-1);
    tracep->declBus(c+96,"RD1D", false,-1, 31,0);
    tracep->declBus(c+97,"RD2D", false,-1, 31,0);
    tracep->declBus(c+12,"PCD", false,-1, 31,0);
    tracep->declBus(c+13,"RdD", false,-1, 4,0);
    tracep->declBus(c+14,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+15,"PCPlus4D", false,-1, 31,0);
    tracep->declBus(c+95,"a0", false,-1, 31,0);
    tracep->declBus(c+33,"InstrD", false,-1, 31,0);
    tracep->declBus(c+34,"ImmSrcD", false,-1, 2,0);
    tracep->pushNamePrefix("Reg_File ");
    tracep->declBus(c+100,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+35,"A1", false,-1, 4,0);
    tracep->declBus(c+36,"A2", false,-1, 4,0);
    tracep->declBus(c+31,"A3", false,-1, 4,0);
    tracep->declBit(c+30,"WE3", false,-1);
    tracep->declBus(c+32,"WD3", false,-1, 31,0);
    tracep->declBus(c+95,"a0", false,-1, 31,0);
    tracep->declBus(c+96,"RD1", false,-1, 31,0);
    tracep->declBus(c+97,"RD2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+58+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ctrl ");
    tracep->declBus(c+99,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"Instr", false,-1, 31,0);
    tracep->declBus(c+5,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+6,"MemWrite", false,-1);
    tracep->declBus(c+9,"ALUControl", false,-1, 2,0);
    tracep->declBit(c+10,"ALUSrc", false,-1);
    tracep->declBus(c+34,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBit(c+7,"Jump", false,-1);
    tracep->declBit(c+8,"Branch", false,-1);
    tracep->declBit(c+11,"JALRctrl", false,-1);
    tracep->declBus(c+37,"ALUOp", false,-1, 1,0);
    tracep->pushNamePrefix("dalu ");
    tracep->declBus(c+37,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+38,"opcode", false,-1, 6,0);
    tracep->declBus(c+39,"fn3", false,-1, 2,0);
    tracep->declBus(c+40,"fn7", false,-1, 6,0);
    tracep->declBus(c+9,"ALUControl", false,-1, 2,0);
    tracep->declBus(c+41,"decoder", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dmain ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"Instr", false,-1, 31,0);
    tracep->declBus(c+5,"ResultSrc", false,-1, 1,0);
    tracep->declBit(c+6,"MemWrite", false,-1);
    tracep->declBit(c+10,"ALUSrc", false,-1);
    tracep->declBus(c+34,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+4,"RegWrite", false,-1);
    tracep->declBus(c+37,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+7,"Jump", false,-1);
    tracep->declBit(c+8,"Branch", false,-1);
    tracep->declBit(c+11,"JALRctrl", false,-1);
    tracep->declBus(c+38,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("extd ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"Instr", false,-1, 31,0);
    tracep->declBus(c+34,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+14,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+4,"RegWriteD", false,-1);
    tracep->declBus(c+5,"ResultSrcD", false,-1, 1,0);
    tracep->declBit(c+6,"MemWriteD", false,-1);
    tracep->declBit(c+7,"JumpD", false,-1);
    tracep->declBit(c+8,"BranchD", false,-1);
    tracep->declBus(c+9,"ALUControlD", false,-1, 2,0);
    tracep->declBit(c+10,"ALUSrcD", false,-1);
    tracep->declBit(c+11,"JALRctrlD", false,-1);
    tracep->declBit(c+16,"flush", false,-1);
    tracep->declBus(c+96,"RD1D", false,-1, 31,0);
    tracep->declBus(c+97,"RD2D", false,-1, 31,0);
    tracep->declBus(c+12,"PCD", false,-1, 31,0);
    tracep->declBus(c+14,"ImmExtD", false,-1, 31,0);
    tracep->declBus(c+13,"RdD", false,-1, 4,0);
    tracep->declBus(c+15,"PCPlus4D", false,-1, 31,0);
    tracep->declBit(c+17,"RegWriteE", false,-1);
    tracep->declBus(c+18,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBit(c+2,"PCSrcE", false,-1);
    tracep->declBus(c+20,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+21,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+3,"PCTargetE", false,-1, 31,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+23,"PCPlus4E", false,-1, 31,0);
    tracep->declBus(c+42,"RD1E", false,-1, 31,0);
    tracep->declBus(c+21,"RD2E", false,-1, 31,0);
    tracep->declBus(c+43,"PCE", false,-1, 31,0);
    tracep->declBus(c+44,"ImmExtE", false,-1, 31,0);
    tracep->declBus(c+45,"SrcBE", false,-1, 31,0);
    tracep->declBus(c+46,"ALUControlE", false,-1, 2,0);
    tracep->declBit(c+47,"ALUSrcE", false,-1);
    tracep->declBit(c+48,"JumpE", false,-1);
    tracep->declBit(c+49,"BranchE", false,-1);
    tracep->declBit(c+50,"ZeroE", false,-1);
    tracep->declBit(c+51,"JALRctrlE", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+42,"SrcAE", false,-1, 31,0);
    tracep->declBus(c+45,"SrcBE", false,-1, 31,0);
    tracep->declBus(c+46,"ALUControlE", false,-1, 2,0);
    tracep->declBus(c+20,"ALUout", false,-1, 31,0);
    tracep->declBit(c+50,"ZeroE", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fetch ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBit(c+2,"PCSrcE", false,-1);
    tracep->declBus(c+3,"PCTargetE", false,-1, 31,0);
    tracep->declBus(c+90,"PCF", false,-1, 31,0);
    tracep->declBus(c+91,"InstrF", false,-1, 31,0);
    tracep->declBus(c+92,"PCPlus4F", false,-1, 31,0);
    tracep->declBus(c+98,"nextPCF", false,-1, 31,0);
    tracep->pushNamePrefix("PC_Reg ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+94,"rst", false,-1);
    tracep->declBus(c+98,"nextPCF", false,-1, 31,0);
    tracep->declBus(c+90,"PCF", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instrmem ");
    tracep->declBus(c+101,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"A", false,-1, 31,0);
    tracep->declBus(c+91,"RD", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("memory ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+17,"RegWriteE", false,-1);
    tracep->declBus(c+18,"ResultSrcE", false,-1, 1,0);
    tracep->declBit(c+19,"MemWriteE", false,-1);
    tracep->declBus(c+20,"ALUResultE", false,-1, 31,0);
    tracep->declBus(c+21,"WriteDataE", false,-1, 31,0);
    tracep->declBus(c+22,"RdE", false,-1, 4,0);
    tracep->declBus(c+23,"PCPlus4E", false,-1, 31,0);
    tracep->declBit(c+24,"RegWriteM", false,-1);
    tracep->declBus(c+25,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+26,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+27,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+28,"RdM", false,-1, 4,0);
    tracep->declBus(c+29,"PCPlus4M", false,-1, 31,0);
    tracep->declBus(c+52,"WriteDataM", false,-1, 31,0);
    tracep->declBit(c+53,"MemWriteM", false,-1);
    tracep->pushNamePrefix("datamem ");
    tracep->declBus(c+99,"EXT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+101,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBus(c+26,"A", false,-1, 31,0);
    tracep->declBus(c+52,"WD", false,-1, 31,0);
    tracep->declBit(c+53,"WE", false,-1);
    tracep->declBus(c+27,"RD", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("writeback ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+93,"clk", false,-1);
    tracep->declBit(c+24,"RegWriteM", false,-1);
    tracep->declBus(c+25,"ResultSrcM", false,-1, 1,0);
    tracep->declBus(c+26,"ALUResultM", false,-1, 31,0);
    tracep->declBus(c+27,"ReadDataM", false,-1, 31,0);
    tracep->declBus(c+28,"RdM", false,-1, 4,0);
    tracep->declBus(c+29,"PCPlus4M", false,-1, 31,0);
    tracep->declBit(c+30,"RegWriteW", false,-1);
    tracep->declBus(c+31,"RdW", false,-1, 4,0);
    tracep->declBus(c+32,"ResultW", false,-1, 31,0);
    tracep->declBus(c+54,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+55,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+56,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+57,"PCPlus4W", false,-1, 31,0);
    tracep->pushNamePrefix("Writeback_mux ");
    tracep->declBus(c+99,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"ReadDataW", false,-1, 31,0);
    tracep->declBus(c+57,"PCPlus4W", false,-1, 31,0);
    tracep->declBus(c+55,"ALUResultW", false,-1, 31,0);
    tracep->declBus(c+54,"ResultSrcW", false,-1, 1,0);
    tracep->declBus(c+32,"ResultW", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->cpu__DOT__PCSrcE));
    bufp->fullIData(oldp+3,(((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                              ? vlSelf->cpu__DOT__ALUResultE
                              : (vlSelf->cpu__DOT__execute__DOT__PCE 
                                 + vlSelf->cpu__DOT__execute__DOT__ImmExtE))),32);
    bufp->fullBit(oldp+4,(vlSelf->cpu__DOT__RegWriteD));
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__ResultSrcD),2);
    bufp->fullBit(oldp+6,(vlSelf->cpu__DOT__MemWriteD));
    bufp->fullBit(oldp+7,(vlSelf->cpu__DOT__JumpD));
    bufp->fullBit(oldp+8,(vlSelf->cpu__DOT__BranchD));
    bufp->fullCData(oldp+9,(vlSelf->cpu__DOT__ALUControlD),3);
    bufp->fullBit(oldp+10,(vlSelf->cpu__DOT__ALUSrcD));
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__JALRctrlD));
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__PCD),32);
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 7U))),5);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__ImmExtD),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__PCPlus4D),32);
    bufp->fullBit(oldp+16,(((IData)(vlSelf->cpu__DOT__PCSrcE)
                             ? 1U : 0U)));
    bufp->fullBit(oldp+17,(vlSelf->cpu__DOT__RegWriteE));
    bufp->fullCData(oldp+18,(vlSelf->cpu__DOT__ResultSrcE),2);
    bufp->fullBit(oldp+19,(vlSelf->cpu__DOT__MemWriteE));
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__ALUResultE),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__execute__DOT__RD2E),32);
    bufp->fullCData(oldp+22,(vlSelf->cpu__DOT__RdE),5);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__PCPlus4E),32);
    bufp->fullBit(oldp+24,(vlSelf->cpu__DOT__RegWriteM));
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__ResultSrcM),2);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__ALUResultM),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array
                             [(0x1ffffU & vlSelf->cpu__DOT__ALUResultM)]),32);
    bufp->fullCData(oldp+28,(vlSelf->cpu__DOT__RdM),5);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__PCPlus4M),32);
    bufp->fullBit(oldp+30,(vlSelf->cpu__DOT__RegWriteW));
    bufp->fullCData(oldp+31,(vlSelf->cpu__DOT__RdW),5);
    bufp->fullIData(oldp+32,(((0U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                               ? vlSelf->cpu__DOT__writeback__DOT__ALUResultW
                               : ((1U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                                   ? vlSelf->cpu__DOT__writeback__DOT__ReadDataW
                                   : ((2U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                                       ? vlSelf->cpu__DOT__writeback__DOT__PCPlus4W
                                       : 0U)))),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__decode__DOT__InstrD),32);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__decode__DOT__ImmSrcD),3);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+37,(vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp),2);
    bufp->fullCData(oldp+38,((0x7fU & vlSelf->cpu__DOT__decode__DOT__InstrD)),7);
    bufp->fullCData(oldp+39,((7U & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+40,((vlSelf->cpu__DOT__decode__DOT__InstrD 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+41,((((IData)(vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp) 
                               << 5U) | ((0x1cU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                   >> 0xaU)) 
                                         | ((2U & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                >> 0x1eU)))))),7);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__execute__DOT__RD1E),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__execute__DOT__PCE),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__execute__DOT__ImmExtE),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__execute__DOT__SrcBE),32);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__execute__DOT__ALUControlE),3);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__execute__DOT__ALUSrcE));
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__execute__DOT__JumpE));
    bufp->fullBit(oldp+49,(vlSelf->cpu__DOT__execute__DOT__BranchE));
    bufp->fullBit(oldp+50,((0U != (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                   - vlSelf->cpu__DOT__execute__DOT__SrcBE))));
    bufp->fullBit(oldp+51,(vlSelf->cpu__DOT__execute__DOT__JALRctrlE));
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__memory__DOT__WriteDataM),32);
    bufp->fullBit(oldp+53,(vlSelf->cpu__DOT__memory__DOT__MemWriteM));
    bufp->fullCData(oldp+54,(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW),2);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__writeback__DOT__ALUResultW),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__writeback__DOT__ReadDataW),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__writeback__DOT__PCPlus4W),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+72,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+73,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+75,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+79,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+80,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+81,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+82,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+83,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+84,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+85,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+86,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+87,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+88,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+89,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[31]),32);
    bufp->fullIData(oldp+90,(vlSelf->cpu__DOT__PCF),32);
    bufp->fullIData(oldp+91,(((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                               [(0xfffU & ((IData)(3U) 
                                           + vlSelf->cpu__DOT__PCF))] 
                               << 0x18U) | ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                             [(0xfffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->cpu__DOT__PCF))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu__DOT__PCF))] 
                                                << 8U) 
                                               | vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                               [(0xfffU 
                                                 & vlSelf->cpu__DOT__PCF)])))),32);
    bufp->fullIData(oldp+92,(((IData)(4U) + vlSelf->cpu__DOT__PCF)),32);
    bufp->fullBit(oldp+93,(vlSelf->clk));
    bufp->fullBit(oldp+94,(vlSelf->rst));
    bufp->fullIData(oldp+95,(vlSelf->a0),32);
    bufp->fullIData(oldp+96,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+97,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
                             [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                        >> 0x14U))]),32);
    bufp->fullIData(oldp+98,(((IData)(vlSelf->cpu__DOT__PCSrcE)
                               ? ((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                                   ? vlSelf->cpu__DOT__ALUResultE
                                   : (vlSelf->cpu__DOT__execute__DOT__PCE 
                                      + vlSelf->cpu__DOT__execute__DOT__ImmExtE))
                               : ((IData)(4U) + vlSelf->cpu__DOT__PCF))),32);
    bufp->fullIData(oldp+99,(0x20U),32);
    bufp->fullIData(oldp+100,(5U),32);
    bufp->fullIData(oldp+101,(8U),32);
}
