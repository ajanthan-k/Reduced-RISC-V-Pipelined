// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_ATTR_COLD void Vcpu___024root___initial__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___initial__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9d839ed1__0;
    // Body
    VL_READMEM_N(true, 8, 131072, 0, std::string{"sine.mem"}
                 ,  &(vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array)
                 , 0x10000U, 0x1ffffU);
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[1U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[2U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[3U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[4U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[5U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[6U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[7U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[8U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[9U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xaU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xbU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xcU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xdU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xeU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0xfU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x10U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x11U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x12U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x13U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x14U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x15U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x16U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x17U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x18U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x19U] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1aU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1bU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1cU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1dU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1eU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[0x1fU] = 0U;
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp_h9d839ed1__0[0U] = 0x2e686578U;
    __Vtemp_h9d839ed1__0[1U] = 0x6c696e65U;
    __Vtemp_h9d839ed1__0[2U] = 0x50697065U;
    __Vtemp_h9d839ed1__0[3U] = 0x4631U;
    VL_READMEM_N(true, 8, 4096, 3217031168, VL_CVT_PACK_STR_NW(4, __Vtemp_h9d839ed1__0)
                 ,  &(vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array)
                 , 3217031168, ~0ULL);
}

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

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    vlSelf->cpu__DOT__execute__DOT__SrcBE = ((IData)(vlSelf->cpu__DOT__execute__DOT__ALUSrcE)
                                              ? vlSelf->cpu__DOT__execute__DOT__ImmExtE
                                              : vlSelf->cpu__DOT__execute__DOT__RD2E);
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
    vlSelf->a0 = vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array
        [0xaU];
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
    vlSelf->cpu__DOT__fetch__DOT__nextPCF = ((IData)(vlSelf->cpu__DOT__PCSrcE)
                                              ? ((IData)(vlSelf->cpu__DOT__execute__DOT__JALRctrlE)
                                                  ? vlSelf->cpu__DOT__ALUResultE
                                                  : 
                                                 (vlSelf->cpu__DOT__execute__DOT__PCE 
                                                  + vlSelf->cpu__DOT__execute__DOT__ImmExtE))
                                              : ((IData)(4U) 
                                                 + vlSelf->cpu__DOT__PCF));
}

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vcpu___024root___final(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___final\n"); );
}

VL_ATTR_COLD void Vcpu___024root___ctor_var_reset(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->a0 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCSrcE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PCF = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWriteD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ResultSrcD = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__MemWriteD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__JumpD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__BranchD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUControlD = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUSrcD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__JALRctrlD = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PCD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ImmExtD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCPlus4D = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWriteE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ResultSrcE = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__MemWriteE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUResultE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RdE = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__PCPlus4E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWriteM = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ResultSrcM = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__ALUResultM = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RdM = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__PCPlus4M = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__RegWriteW = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__RdW = VL_RAND_RESET_I(5);
    vlSelf->cpu__DOT__fetch__DOT__nextPCF = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__fetch__DOT__instrmem__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__decode__DOT__InstrD = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__decode__DOT__ImmSrcD = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__decode__DOT__ctrl__DOT__ALUOp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__decode__DOT__Reg_File__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->cpu__DOT__execute__DOT__RD1E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute__DOT__RD2E = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute__DOT__PCE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute__DOT__ImmExtE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute__DOT__SrcBE = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute__DOT__ALUControlE = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__execute__DOT__ALUSrcE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__execute__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__execute__DOT__BranchE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__execute__DOT__JALRctrlE = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__memory__DOT__WriteDataM = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__memory__DOT__MemWriteM = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<131072; ++__Vi0) {
        vlSelf->cpu__DOT__memory__DOT__datamem__DOT__data_mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__writeback__DOT__ResultSrcW = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__writeback__DOT__ALUResultW = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__writeback__DOT__ReadDataW = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__writeback__DOT__PCPlus4W = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
