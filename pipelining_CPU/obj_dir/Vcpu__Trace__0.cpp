// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu___024root__trace_chg_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+1,(vlSelf->cpu__DOT__PCSrcE));
        bufp->chgIData(oldp+2,(((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                                 ? vlSelf->cpu__DOT__ALUResultE
                                 : (vlSelf->cpu__DOT__execute__DOT__PCE 
                                    + vlSelf->cpu__DOT__execute__DOT__ImmExtE))),32);
        bufp->chgBit(oldp+3,(vlSelf->cpu__DOT__RegWriteD));
        bufp->chgCData(oldp+4,(vlSelf->cpu__DOT__ResultSrcD),2);
        bufp->chgBit(oldp+5,(vlSelf->cpu__DOT__MemWriteD));
        bufp->chgBit(oldp+6,(vlSelf->cpu__DOT__JumpD));
        bufp->chgBit(oldp+7,(vlSelf->cpu__DOT__BranchD));
        bufp->chgCData(oldp+8,(vlSelf->cpu__DOT__ALUControlD),3);
        bufp->chgBit(oldp+9,(vlSelf->cpu__DOT__ALUSrcD));
        bufp->chgBit(oldp+10,(vlSelf->cpu__DOT__JALRctrlD));
        bufp->chgIData(oldp+11,(vlSelf->cpu__DOT__PCD),32);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                          >> 7U))),5);
        bufp->chgIData(oldp+13,(vlSelf->cpu__DOT__ImmExtD),32);
        bufp->chgIData(oldp+14,(vlSelf->cpu__DOT__PCPlus4D),32);
        bufp->chgBit(oldp+15,(((IData)(vlSelf->cpu__DOT__PCSrcE)
                                ? 1U : 0U)));
        bufp->chgBit(oldp+16,(vlSelf->cpu__DOT__RegWriteE));
        bufp->chgCData(oldp+17,(vlSelf->cpu__DOT__ResultSrcE),2);
        bufp->chgBit(oldp+18,(vlSelf->cpu__DOT__MemWriteE));
        bufp->chgIData(oldp+19,(vlSelf->cpu__DOT__ALUResultE),32);
        bufp->chgIData(oldp+20,(vlSelf->cpu__DOT__execute__DOT__RD2E),32);
        bufp->chgCData(oldp+21,(vlSelf->cpu__DOT__RdE),5);
        bufp->chgIData(oldp+22,(vlSelf->cpu__DOT__PCPlus4E),32);
        bufp->chgBit(oldp+23,(vlSelf->cpu__DOT__RegWriteM));
        bufp->chgCData(oldp+24,(vlSelf->cpu__DOT__ResultSrcM),2);
        bufp->chgIData(oldp+25,(vlSelf->cpu__DOT__ALUResultM),32);
        bufp->chgIData(oldp+26,(vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array
                                [(0x1ffffU & vlSelf->cpu__DOT__ALUResultM)]),32);
        bufp->chgCData(oldp+27,(vlSelf->cpu__DOT__RdM),5);
        bufp->chgIData(oldp+28,(vlSelf->cpu__DOT__PCPlus4M),32);
        bufp->chgBit(oldp+29,(vlSelf->cpu__DOT__RegWriteW));
        bufp->chgCData(oldp+30,(vlSelf->cpu__DOT__RdW),5);
        bufp->chgIData(oldp+31,(((0U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                                  ? vlSelf->cpu__DOT__writeback__DOT__ALUResultW
                                  : ((1U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                                      ? vlSelf->cpu__DOT__writeback__DOT__ReadDataW
                                      : ((2U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                                          ? vlSelf->cpu__DOT__writeback__DOT__PCPlus4W
                                          : 0U)))),32);
        bufp->chgIData(oldp+32,(vlSelf->cpu__DOT__decode__DOT__InstrD),32);
        bufp->chgCData(oldp+33,(vlSelf->cpu__DOT__decode__DOT__ImmSrcD),3);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+36,(vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp),2);
        bufp->chgCData(oldp+37,((0x7fU & vlSelf->cpu__DOT__decode__DOT__InstrD)),7);
        bufp->chgCData(oldp+38,((7U & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+39,((vlSelf->cpu__DOT__decode__DOT__InstrD 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+40,((((IData)(vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp) 
                                  << 5U) | ((0x1cU 
                                             & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                >> 0xaU)) 
                                            | ((2U 
                                                & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                   >> 4U)) 
                                               | (1U 
                                                  & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                     >> 0x1eU)))))),7);
        bufp->chgIData(oldp+41,(vlSelf->cpu__DOT__execute__DOT__RD1E),32);
        bufp->chgIData(oldp+42,(vlSelf->cpu__DOT__execute__DOT__PCE),32);
        bufp->chgIData(oldp+43,(vlSelf->cpu__DOT__execute__DOT__ImmExtE),32);
        bufp->chgIData(oldp+44,(vlSelf->cpu__DOT__execute__DOT__SrcBE),32);
        bufp->chgCData(oldp+45,(vlSelf->cpu__DOT__execute__DOT__ALUControlE),3);
        bufp->chgBit(oldp+46,(vlSelf->cpu__DOT__execute__DOT__ALUSrcE));
        bufp->chgBit(oldp+47,(vlSelf->cpu__DOT__execute__DOT__JumpE));
        bufp->chgBit(oldp+48,(vlSelf->cpu__DOT__execute__DOT__BranchE));
        bufp->chgBit(oldp+49,((0U != (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                      - vlSelf->cpu__DOT__execute__DOT__SrcBE))));
        bufp->chgBit(oldp+50,(vlSelf->cpu__DOT__execute__DOT__JALRctrlE));
        bufp->chgIData(oldp+51,(vlSelf->cpu__DOT__memory__DOT__WriteDataM),32);
        bufp->chgBit(oldp+52,(vlSelf->cpu__DOT__memory__DOT__MemWriteM));
        bufp->chgCData(oldp+53,(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW),2);
        bufp->chgIData(oldp+54,(vlSelf->cpu__DOT__writeback__DOT__ALUResultW),32);
        bufp->chgIData(oldp+55,(vlSelf->cpu__DOT__writeback__DOT__ReadDataW),32);
        bufp->chgIData(oldp+56,(vlSelf->cpu__DOT__writeback__DOT__PCPlus4W),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+57,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0]),32);
        bufp->chgIData(oldp+58,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[1]),32);
        bufp->chgIData(oldp+59,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[2]),32);
        bufp->chgIData(oldp+60,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[3]),32);
        bufp->chgIData(oldp+61,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[4]),32);
        bufp->chgIData(oldp+62,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[5]),32);
        bufp->chgIData(oldp+63,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[6]),32);
        bufp->chgIData(oldp+64,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[7]),32);
        bufp->chgIData(oldp+65,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[8]),32);
        bufp->chgIData(oldp+66,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[9]),32);
        bufp->chgIData(oldp+67,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[10]),32);
        bufp->chgIData(oldp+68,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[11]),32);
        bufp->chgIData(oldp+69,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[12]),32);
        bufp->chgIData(oldp+70,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[13]),32);
        bufp->chgIData(oldp+71,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[14]),32);
        bufp->chgIData(oldp+72,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[15]),32);
        bufp->chgIData(oldp+73,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[16]),32);
        bufp->chgIData(oldp+74,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[17]),32);
        bufp->chgIData(oldp+75,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[18]),32);
        bufp->chgIData(oldp+76,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[19]),32);
        bufp->chgIData(oldp+77,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[20]),32);
        bufp->chgIData(oldp+78,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[21]),32);
        bufp->chgIData(oldp+79,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[22]),32);
        bufp->chgIData(oldp+80,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[23]),32);
        bufp->chgIData(oldp+81,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[24]),32);
        bufp->chgIData(oldp+82,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[25]),32);
        bufp->chgIData(oldp+83,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[26]),32);
        bufp->chgIData(oldp+84,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[27]),32);
        bufp->chgIData(oldp+85,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[28]),32);
        bufp->chgIData(oldp+86,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[29]),32);
        bufp->chgIData(oldp+87,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[30]),32);
        bufp->chgIData(oldp+88,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+89,(vlSelf->cpu__DOT__PCF),32);
        bufp->chgIData(oldp+90,(((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                  [(0xfffU & ((IData)(3U) 
                                              + vlSelf->cpu__DOT__PCF))] 
                                  << 0x18U) | ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                [(0xfffU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->cpu__DOT__PCF))] 
                                                << 0x10U) 
                                               | ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                   [
                                                   (0xfffU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->cpu__DOT__PCF))] 
                                                   << 8U) 
                                                  | vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                  [
                                                  (0xfffU 
                                                   & vlSelf->cpu__DOT__PCF)])))),32);
        bufp->chgIData(oldp+91,(((IData)(4U) + vlSelf->cpu__DOT__PCF)),32);
    }
    bufp->chgBit(oldp+92,(vlSelf->clk));
    bufp->chgBit(oldp+93,(vlSelf->rst));
    bufp->chgIData(oldp+94,(vlSelf->a0),32);
    bufp->chgIData(oldp+95,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
                            [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+96,(vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
                            [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                       >> 0x14U))]),32);
    bufp->chgIData(oldp+97,(((IData)(vlSelf->cpu__DOT__PCSrcE)
                              ? ((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                                  ? vlSelf->cpu__DOT__ALUResultE
                                  : (vlSelf->cpu__DOT__execute__DOT__PCE 
                                     + vlSelf->cpu__DOT__execute__DOT__ImmExtE))
                              : ((IData)(4U) + vlSelf->cpu__DOT__PCF))),32);
}

void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_cleanup\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
