// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h40cdecfe_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h974edfa5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h105add6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_hff97be09_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_ha5941d2e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h92dedc05_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcpu__ConstPool__TABLE_h29afd16c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_hf37416e2_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcpu__ConstPool__TABLE_h39339feb_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_he08f09ed_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    IData/*16:0*/ __Vdlyvdim0__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0 = 0U;
    vlSelf->cpu__DOT__writeback__DOT__ALUResultW = vlSelf->cpu__DOT__ALUResultM;
    vlSelf->cpu__DOT__writeback__DOT__ReadDataW = vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array
        [(0x1ffffU & vlSelf->cpu__DOT__ALUResultM)];
    vlSelf->cpu__DOT__writeback__DOT__ResultSrcW = vlSelf->cpu__DOT__ResultSrcM;
    vlSelf->cpu__DOT__RegWriteW = vlSelf->cpu__DOT__RegWriteM;
    vlSelf->cpu__DOT__execute__DOT__JALRctrlE = ((~ 
                                                  ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                                    ? 1U
                                                    : 0U)) 
                                                 & (IData)(vlSelf->cpu__DOT__JALRctrlD));
    vlSelf->cpu__DOT__writeback__DOT__PCPlus4W = vlSelf->cpu__DOT__PCPlus4M;
    vlSelf->cpu__DOT__execute__DOT__JumpE = ((~ ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                                  ? 1U
                                                  : 0U)) 
                                             & (IData)(vlSelf->cpu__DOT__JumpD));
    vlSelf->cpu__DOT__execute__DOT__BranchE = ((~ ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                                    ? 1U
                                                    : 0U)) 
                                               & (IData)(vlSelf->cpu__DOT__BranchD));
    vlSelf->cpu__DOT__RdW = vlSelf->cpu__DOT__RdM;
    vlSelf->cpu__DOT__execute__DOT__ALUSrcE = ((~ ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                                    ? 1U
                                                    : 0U)) 
                                               & (IData)(vlSelf->cpu__DOT__ALUSrcD));
    if (vlSelf->cpu__DOT__memory__DOT__MemWriteM) {
        __Vdlyvval__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0 
            = (0xffU & vlSelf->cpu__DOT__memory__DOT__WriteDataM);
        __Vdlyvset__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0 
            = (0x1ffffU & vlSelf->cpu__DOT__ALUResultM);
    }
    if (__Vdlyvset__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0) {
        vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array[__Vdlyvdim0__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0] 
            = __Vdlyvval__cpu__DOT__memory__DOT__datamem__DOT__data_mem_array__v0;
    }
    vlSelf->cpu__DOT__ResultSrcM = vlSelf->cpu__DOT__ResultSrcE;
    vlSelf->cpu__DOT__RegWriteM = vlSelf->cpu__DOT__RegWriteE;
    vlSelf->cpu__DOT__PCPlus4M = vlSelf->cpu__DOT__PCPlus4E;
    vlSelf->cpu__DOT__RdM = vlSelf->cpu__DOT__RdE;
    vlSelf->cpu__DOT__memory__DOT__MemWriteM = vlSelf->cpu__DOT__MemWriteE;
    vlSelf->cpu__DOT__memory__DOT__WriteDataM = vlSelf->cpu__DOT__execute__DOT__RD2E;
    if (((IData)(vlSelf->cpu__DOT__PCSrcE) ? 1U : 0U)) {
        vlSelf->cpu__DOT__execute__DOT__ALUControlE = 0U;
        vlSelf->cpu__DOT__execute__DOT__PCE = 0U;
        vlSelf->cpu__DOT__execute__DOT__ImmExtE = 0U;
        vlSelf->cpu__DOT__execute__DOT__RD1E = 0U;
        vlSelf->cpu__DOT__PCD = 0U;
        vlSelf->cpu__DOT__ResultSrcE = 0U;
        vlSelf->cpu__DOT__PCPlus4E = 0U;
        vlSelf->cpu__DOT__RdE = 0U;
        vlSelf->cpu__DOT__execute__DOT__RD2E = 0U;
        vlSelf->cpu__DOT__PCPlus4D = 0U;
        vlSelf->cpu__DOT__decode__DOT__InstrD = 0U;
    } else {
        vlSelf->cpu__DOT__execute__DOT__ALUControlE 
            = vlSelf->cpu__DOT__ALUControlD;
        vlSelf->cpu__DOT__execute__DOT__PCE = vlSelf->cpu__DOT__PCD;
        vlSelf->cpu__DOT__execute__DOT__ImmExtE = vlSelf->cpu__DOT__ImmExtD;
        vlSelf->cpu__DOT__execute__DOT__RD1E = vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
            [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                       >> 0xfU))];
        vlSelf->cpu__DOT__PCD = vlSelf->cpu__DOT__PCF;
        vlSelf->cpu__DOT__ResultSrcE = vlSelf->cpu__DOT__ResultSrcD;
        vlSelf->cpu__DOT__PCPlus4E = vlSelf->cpu__DOT__PCPlus4D;
        vlSelf->cpu__DOT__RdE = (0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                          >> 7U));
        vlSelf->cpu__DOT__execute__DOT__RD2E = vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
            [(0x1fU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                       >> 0x14U))];
        vlSelf->cpu__DOT__PCPlus4D = ((IData)(4U) + vlSelf->cpu__DOT__PCF);
        vlSelf->cpu__DOT__decode__DOT__InstrD = ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                  [
                                                  (0xfffU 
                                                   & ((IData)(3U) 
                                                      + vlSelf->cpu__DOT__PCF))] 
                                                  << 0x18U) 
                                                 | ((vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array
                                                     [
                                                     (0xfffU 
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
                                                        & vlSelf->cpu__DOT__PCF)])));
    }
    vlSelf->cpu__DOT__ALUResultM = vlSelf->cpu__DOT__ALUResultE;
    vlSelf->cpu__DOT__RegWriteE = ((~ ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                        ? 1U : 0U)) 
                                   & (IData)(vlSelf->cpu__DOT__RegWriteD));
    vlSelf->cpu__DOT__MemWriteE = ((~ ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                        ? 1U : 0U)) 
                                   & (IData)(vlSelf->cpu__DOT__MemWriteD));
    vlSelf->cpu__DOT__execute__DOT__SrcBE = ((IData)(vlSelf->cpu__DOT__execute__DOT__ALUSrcE)
                                              ? vlSelf->cpu__DOT__execute__DOT__ImmExtE
                                              : vlSelf->cpu__DOT__execute__DOT__RD2E);
    vlSelf->cpu__DOT__ALUResultE = ((4U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                     ? ((2U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                             ? ((0x1fU 
                                                 >= vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                                 ? 
                                                (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                 >> vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                                 : 0U)
                                             : ((0x1fU 
                                                 >= vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                                 ? 
                                                (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                 << vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                                 : 0U))
                                         : ((1U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                             ? vlSelf->cpu__DOT__execute__DOT__SrcBE
                                             : (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                ^ vlSelf->cpu__DOT__execute__DOT__SrcBE)))
                                     : ((2U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                         ? ((1U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                | vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                & vlSelf->cpu__DOT__execute__DOT__SrcBE))
                                         : ((1U & (IData)(vlSelf->cpu__DOT__execute__DOT__ALUControlE))
                                             ? (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                - vlSelf->cpu__DOT__execute__DOT__SrcBE)
                                             : (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                                + vlSelf->cpu__DOT__execute__DOT__SrcBE))));
    vlSelf->cpu__DOT__PCSrcE = ((IData)(vlSelf->cpu__DOT__execute__DOT__JumpE) 
                                | ((IData)(vlSelf->cpu__DOT__execute__DOT__BranchE) 
                                   & (0U != (vlSelf->cpu__DOT__execute__DOT__RD1E 
                                             - vlSelf->cpu__DOT__execute__DOT__SrcBE))));
    __Vtableidx1 = (0x7fU & vlSelf->cpu__DOT__decode__DOT__InstrD);
    vlSelf->cpu__DOT__JumpD = Vcpu__ConstPool__TABLE_h40cdecfe_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__BranchD = Vcpu__ConstPool__TABLE_h974edfa5_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__JALRctrlD = Vcpu__ConstPool__TABLE_h105add6f_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__RegWriteD = Vcpu__ConstPool__TABLE_hff97be09_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__decode__DOT__ImmSrcD = Vcpu__ConstPool__TABLE_ha5941d2e_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__ALUSrcD = Vcpu__ConstPool__TABLE_h92dedc05_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__MemWriteD = Vcpu__ConstPool__TABLE_h29afd16c_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__ResultSrcD = Vcpu__ConstPool__TABLE_hf37416e2_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp 
        = Vcpu__ConstPool__TABLE_h39339feb_0[__Vtableidx1];
    vlSelf->cpu__DOT__ImmExtD = ((4U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                  ? ((2U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                      ? 0U : ((1U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                               ? 0U
                                               : (0xfffff000U 
                                                  & vlSelf->cpu__DOT__decode__DOT__InstrD)))
                                  : ((2U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                      ? ((1U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0x15U) 
                                             | ((0x1fe000U 
                                                 & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                    << 1U)) 
                                                | ((0x1000U 
                                                    & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                       >> 8U)) 
                                                   | ((0xfe0U 
                                                       & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                            >> 0x14U))))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                         >> 7U))))))
                                      : ((1U & (IData)(vlSelf->cpu__DOT__decode__DOT__ImmSrcD))
                                          ? (((- (IData)(
                                                         (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                      >> 7U))))
                                          : (((- (IData)(
                                                         (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                          >> 0x1fU))) 
                                              << 0xcU) 
                                             | (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                                >> 0x14U)))));
    __Vtableidx2 = (((IData)(vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                         >> 0xaU)) 
                               | ((2U & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                         >> 4U)) | 
                                  (1U & (vlSelf->cpu__DOT__decode__DOT__InstrD 
                                         >> 0x1eU)))));
    vlSelf->cpu__DOT__ALUControlD = Vcpu__ConstPool__TABLE_he08f09ed_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0;
    // Body
    __Vdlyvset__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0 = 0U;
    if (((IData)(vlSelf->cpu__DOT__RegWriteW) & (0U 
                                                 != (IData)(vlSelf->cpu__DOT__RdW)))) {
        __Vdlyvval__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0 
            = ((0U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                ? vlSelf->cpu__DOT__writeback__DOT__ALUResultW
                : ((1U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                    ? vlSelf->cpu__DOT__writeback__DOT__ReadDataW
                    : ((2U == (IData)(vlSelf->cpu__DOT__writeback__DOT__ResultSrcW))
                        ? vlSelf->cpu__DOT__writeback__DOT__PCPlus4W
                        : 0U)));
        __Vdlyvset__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0 
            = vlSelf->cpu__DOT__RdW;
    }
    if (__Vdlyvset__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[__Vdlyvdim0__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0] 
            = __Vdlyvval__cpu__DOT__decode__DOT__Reg_File__DOT__ram_array__v0;
    }
    vlSelf->a0 = vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
        [0xaU];
}

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__3(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->cpu__DOT__PCF = ((IData)(vlSelf->rst) ? 0U
                              : vlSelf->cpu__DOT__fetch__DOT__nextPCF);
    vlSelf->cpu__DOT__fetch__DOT__nextPCF = ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                              ? ((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                                                  ? vlSelf->cpu__DOT__ALUResultE
                                                  : 
                                                 (vlSelf->cpu__DOT__execute__DOT__PCE 
                                                  + vlSelf->cpu__DOT__execute__DOT__ImmExtE))
                                              : ((IData)(4U) 
                                                 + vlSelf->cpu__DOT__PCF));
}

void Vcpu___024root___eval(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcpu___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vcpu___024root___eval_debug_assertions(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
