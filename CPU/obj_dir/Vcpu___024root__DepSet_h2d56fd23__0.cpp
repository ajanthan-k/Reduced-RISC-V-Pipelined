// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu.h for the primary calling header

#include "verilated.h"

#include "Vcpu___024root.h"

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__1(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__cpu__DOT__red__DOT__register__DOT__ram_array__v0;
    IData/*31:0*/ __Vdlyvval__cpu__DOT__red__DOT__register__DOT__ram_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__red__DOT__register__DOT__ram_array__v0;
    SData/*11:0*/ __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0;
    CData/*0:0*/ __Vdlyvset__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0;
    SData/*11:0*/ __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1;
    SData/*11:0*/ __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2;
    SData/*11:0*/ __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3;
    CData/*7:0*/ __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3;
    // Body
    __Vdlyvset__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0 = 0U;
    __Vdlyvset__cpu__DOT__red__DOT__register__DOT__ram_array__v0 = 0U;
    if ((IData)((0x23U == (0x7fU & vlSelf->cpu__DOT__instr)))) {
        __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0 
            = (0xffU & vlSelf->cpu__DOT__red__DOT__regOp2);
        __Vdlyvset__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0 
            = (0xfffU & vlSelf->cpu__DOT__red__DOT__ALUout);
    }
    __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1 
        = (0xffU & (vlSelf->cpu__DOT__red__DOT__regOp2 
                    >> 8U));
    __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1 
        = (0xfffU & ((IData)(1U) + vlSelf->cpu__DOT__red__DOT__ALUout));
    __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2 
        = (0xffU & (vlSelf->cpu__DOT__red__DOT__regOp2 
                    >> 0x10U));
    __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2 
        = (0xfffU & ((IData)(2U) + vlSelf->cpu__DOT__red__DOT__ALUout));
    __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3 
        = (vlSelf->cpu__DOT__red__DOT__regOp2 >> 0x18U);
    __Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3 
        = (0xfffU & ((IData)(3U) + vlSelf->cpu__DOT__red__DOT__ALUout));
    if (vlSelf->cpu__DOT__RegWrite) {
        __Vdlyvval__cpu__DOT__red__DOT__register__DOT__ram_array__v0 
            = ((2U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                ? ((IData)(4U) + vlSelf->cpu__DOT__PC)
                : ((1U & (IData)(vlSelf->cpu__DOT__ResultSrc))
                    ? vlSelf->cpu__DOT__red__DOT__readata
                    : vlSelf->cpu__DOT__red__DOT__ALUout));
        __Vdlyvset__cpu__DOT__red__DOT__register__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__cpu__DOT__red__DOT__register__DOT__ram_array__v0 
            = (0x1fU & (vlSelf->cpu__DOT__instr >> 7U));
    }
    if (__Vdlyvset__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0) {
        vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array[__Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0] 
            = __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v0;
    }
    vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array[__Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1] 
        = __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v1;
    vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array[__Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2] 
        = __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v2;
    vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array[__Vdlyvdim0__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3] 
        = __Vdlyvval__cpu__DOT__red__DOT__datamem__DOT__data_mem_array__v3;
    if (__Vdlyvset__cpu__DOT__red__DOT__register__DOT__ram_array__v0) {
        vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[__Vdlyvdim0__cpu__DOT__red__DOT__register__DOT__ram_array__v0] 
            = __Vdlyvval__cpu__DOT__red__DOT__register__DOT__ram_array__v0;
    }
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0U] = 0U;
    vlSelf->a0 = vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array
        [0xaU];
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_hcefd0738_0;

VL_INLINE_OPT void Vcpu___024root___sequent__TOP__2(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___sequent__TOP__2\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->cpu__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->cpu__DOT__blue__DOT__next_PC);
    vlSelf->cpu__DOT__instr = ((vlSelf->cpu__DOT__rom__DOT__rom_array
                                [(0xfffU & ((IData)(3U) 
                                            + vlSelf->cpu__DOT__PC))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__rom__DOT__rom_array
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__rom__DOT__rom_array
                                                 [(0xfffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__rom__DOT__rom_array
                                                [(0xfffU 
                                                  & vlSelf->cpu__DOT__PC)])));
    vlSelf->cpu__DOT__JALRctrl = 0U;
    if ((0x40U & vlSelf->cpu__DOT__instr)) {
        vlSelf->cpu__DOT__RegWrite = (1U & (IData)(
                                                   ((0x20U 
                                                     == 
                                                     (0x30U 
                                                      & vlSelf->cpu__DOT__instr)) 
                                                    & ((8U 
                                                        & vlSelf->cpu__DOT__instr)
                                                        ? (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->cpu__DOT__instr)))
                                                        : (IData)(
                                                                  (7U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->cpu__DOT__instr)))))));
        if ((0x20U & vlSelf->cpu__DOT__instr)) {
            if ((0x10U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__ResultSrc = 0U;
                vlSelf->cpu__DOT__JALRctrl = 0U;
                vlSelf->cpu__DOT__ImmSrc = 0U;
            } else if ((8U & vlSelf->cpu__DOT__instr)) {
                if ((4U & vlSelf->cpu__DOT__instr)) {
                    if ((2U & vlSelf->cpu__DOT__instr)) {
                        if ((1U & vlSelf->cpu__DOT__instr)) {
                            vlSelf->cpu__DOT__ResultSrc = 2U;
                            vlSelf->cpu__DOT__ImmSrc = 3U;
                        } else {
                            vlSelf->cpu__DOT__ResultSrc = 0U;
                            vlSelf->cpu__DOT__ImmSrc = 0U;
                        }
                        if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                            vlSelf->cpu__DOT__JALRctrl = 0U;
                        }
                    } else {
                        vlSelf->cpu__DOT__ResultSrc = 0U;
                        vlSelf->cpu__DOT__JALRctrl = 0U;
                        vlSelf->cpu__DOT__ImmSrc = 0U;
                    }
                } else {
                    vlSelf->cpu__DOT__ResultSrc = 0U;
                    vlSelf->cpu__DOT__JALRctrl = 0U;
                    vlSelf->cpu__DOT__ImmSrc = 0U;
                }
            } else if ((4U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__ResultSrc = ((2U 
                                                & vlSelf->cpu__DOT__instr)
                                                ? (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__instr)
                                                    ? 2U
                                                    : 0U)
                                                : 0U);
                vlSelf->cpu__DOT__JALRctrl = (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelf->cpu__DOT__instr)));
                vlSelf->cpu__DOT__ImmSrc = 0U;
            } else {
                vlSelf->cpu__DOT__ResultSrc = 0U;
                if ((2U & vlSelf->cpu__DOT__instr)) {
                    if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                        vlSelf->cpu__DOT__JALRctrl = 0U;
                    }
                    vlSelf->cpu__DOT__ImmSrc = ((1U 
                                                 & vlSelf->cpu__DOT__instr)
                                                 ? 2U
                                                 : 0U);
                } else {
                    vlSelf->cpu__DOT__JALRctrl = 0U;
                    vlSelf->cpu__DOT__ImmSrc = 0U;
                }
            }
        } else {
            vlSelf->cpu__DOT__ResultSrc = 0U;
            vlSelf->cpu__DOT__JALRctrl = 0U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
        }
        vlSelf->cpu__DOT__ALUsrc = (1U & (IData)(((0x20U 
                                                   == 
                                                   (0x30U 
                                                    & vlSelf->cpu__DOT__instr)) 
                                                  & ((8U 
                                                      & vlSelf->cpu__DOT__instr)
                                                      ? (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->cpu__DOT__instr)))
                                                      : (IData)(
                                                                (7U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->cpu__DOT__instr)))))));
    } else if ((0x20U & vlSelf->cpu__DOT__instr)) {
        vlSelf->cpu__DOT__RegWrite = (1U & (IData)(
                                                   (0x13U 
                                                    == 
                                                    (0x1fU 
                                                     & vlSelf->cpu__DOT__instr))));
        vlSelf->cpu__DOT__ResultSrc = 0U;
        if ((0x10U & vlSelf->cpu__DOT__instr)) {
            if ((8U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((4U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((2U & vlSelf->cpu__DOT__instr)) {
                if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                    vlSelf->cpu__DOT__JALRctrl = 0U;
                }
            } else {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            }
            vlSelf->cpu__DOT__ImmSrc = 0U;
        } else if ((8U & vlSelf->cpu__DOT__instr)) {
            vlSelf->cpu__DOT__JALRctrl = 0U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
        } else if ((4U & vlSelf->cpu__DOT__instr)) {
            vlSelf->cpu__DOT__JALRctrl = 0U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
        } else if ((2U & vlSelf->cpu__DOT__instr)) {
            if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            }
            vlSelf->cpu__DOT__ImmSrc = ((1U & vlSelf->cpu__DOT__instr)
                                         ? 1U : 0U);
        } else {
            vlSelf->cpu__DOT__JALRctrl = 0U;
            vlSelf->cpu__DOT__ImmSrc = 0U;
        }
        vlSelf->cpu__DOT__ALUsrc = (1U & (IData)((3U 
                                                  == 
                                                  (0x1fU 
                                                   & vlSelf->cpu__DOT__instr))));
    } else {
        if ((0x10U & vlSelf->cpu__DOT__instr)) {
            vlSelf->cpu__DOT__RegWrite = (1U & (IData)(
                                                       (3U 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->cpu__DOT__instr))));
            vlSelf->cpu__DOT__ResultSrc = 0U;
            if ((8U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((4U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((2U & vlSelf->cpu__DOT__instr)) {
                if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                    vlSelf->cpu__DOT__JALRctrl = 0U;
                }
            } else {
                vlSelf->cpu__DOT__JALRctrl = 0U;
            }
            vlSelf->cpu__DOT__ALUsrc = (1U & (IData)(
                                                     (3U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->cpu__DOT__instr))));
        } else {
            vlSelf->cpu__DOT__RegWrite = (1U & (IData)(
                                                       (3U 
                                                        == 
                                                        (0xfU 
                                                         & vlSelf->cpu__DOT__instr))));
            if ((8U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__ResultSrc = 0U;
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((4U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__ResultSrc = 0U;
                vlSelf->cpu__DOT__JALRctrl = 0U;
            } else if ((2U & vlSelf->cpu__DOT__instr)) {
                vlSelf->cpu__DOT__ResultSrc = ((1U 
                                                & vlSelf->cpu__DOT__instr)
                                                ? 1U
                                                : 0U);
                if ((1U & (~ vlSelf->cpu__DOT__instr))) {
                    vlSelf->cpu__DOT__JALRctrl = 0U;
                }
            } else {
                vlSelf->cpu__DOT__ResultSrc = 0U;
                vlSelf->cpu__DOT__JALRctrl = 0U;
            }
            vlSelf->cpu__DOT__ALUsrc = (1U & (IData)(
                                                     (3U 
                                                      == 
                                                      (0xfU 
                                                       & vlSelf->cpu__DOT__instr))));
        }
        vlSelf->cpu__DOT__ImmSrc = 0U;
    }
    __Vtableidx1 = ((((0x40U & vlSelf->cpu__DOT__instr)
                       ? ((0x20U & vlSelf->cpu__DOT__instr)
                           ? ((0x10U & vlSelf->cpu__DOT__instr)
                               ? 0U : ((8U & vlSelf->cpu__DOT__instr)
                                        ? 0U : ((4U 
                                                 & vlSelf->cpu__DOT__instr)
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & vlSelf->cpu__DOT__instr)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U))))
                           : 0U) : ((0x20U & vlSelf->cpu__DOT__instr)
                                     ? ((0x10U & vlSelf->cpu__DOT__instr)
                                         ? ((8U & vlSelf->cpu__DOT__instr)
                                             ? 0U : 
                                            ((4U & vlSelf->cpu__DOT__instr)
                                              ? 0U : 
                                             ((2U & vlSelf->cpu__DOT__instr)
                                               ? ((1U 
                                                   & vlSelf->cpu__DOT__instr)
                                                   ? 2U
                                                   : 0U)
                                               : 0U)))
                                         : 0U) : 0U)) 
                     << 5U) | ((0x1cU & (vlSelf->cpu__DOT__instr 
                                         >> 0xaU)) 
                               | ((2U & (vlSelf->cpu__DOT__instr 
                                         >> 4U)) | 
                                  (1U & (vlSelf->cpu__DOT__instr 
                                         >> 0x1eU)))));
    vlSelf->cpu__DOT__ALUctrl = Vcpu__ConstPool__TABLE_hcefd0738_0
        [__Vtableidx1];
    vlSelf->cpu__DOT__red__DOT__SrcA = vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0xfU))];
    vlSelf->cpu__DOT__red__DOT__regOp2 = vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array
        [(0x1fU & (vlSelf->cpu__DOT__instr >> 0x14U))];
    vlSelf->cpu__DOT__ImmOp = ((2U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x1fe000U 
                                         & (vlSelf->cpu__DOT__instr 
                                            << 1U)) 
                                        | ((0x1000U 
                                            & (vlSelf->cpu__DOT__instr 
                                               >> 8U)) 
                                           | ((0xfe0U 
                                               & (vlSelf->cpu__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->cpu__DOT__instr 
                                                    >> 0x14U))))))
                                    : (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->cpu__DOT__instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->cpu__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->cpu__DOT__instr 
                                                 >> 7U))))))
                                : ((1U & (IData)(vlSelf->cpu__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->cpu__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->cpu__DOT__instr 
                                            >> 7U))))
                                    : (((- (IData)(
                                                   (vlSelf->cpu__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->cpu__DOT__instr 
                                        >> 0x14U))));
    vlSelf->cpu__DOT__red__DOT__ALUop2 = ((IData)(vlSelf->cpu__DOT__ALUsrc)
                                           ? vlSelf->cpu__DOT__ImmOp
                                           : vlSelf->cpu__DOT__red__DOT__regOp2);
    vlSelf->cpu__DOT__red__DOT__ALUout = ((4U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                    ? 
                                                   (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                    >> vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                    : 0U)
                                                   : 
                                                  ((0x1fU 
                                                    >= vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                    ? 
                                                   (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                    << vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                    : 0U))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                   ^ vlSelf->cpu__DOT__red__DOT__ALUop2)))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                   | vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                   : 
                                                  (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                   & vlSelf->cpu__DOT__red__DOT__ALUop2))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__ALUctrl))
                                                   ? 
                                                  (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                   - vlSelf->cpu__DOT__red__DOT__ALUop2)
                                                   : 
                                                  (vlSelf->cpu__DOT__red__DOT__SrcA 
                                                   + vlSelf->cpu__DOT__red__DOT__ALUop2))));
    vlSelf->cpu__DOT__Zero = (0U == (vlSelf->cpu__DOT__red__DOT__SrcA 
                                     - vlSelf->cpu__DOT__red__DOT__ALUop2));
    vlSelf->cpu__DOT__red__DOT__readata = ((0xffffff00U 
                                            & vlSelf->cpu__DOT__red__DOT__readata) 
                                           | vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array
                                           [(0xfffU 
                                             & vlSelf->cpu__DOT__red__DOT__ALUout)]);
    vlSelf->cpu__DOT__red__DOT__readata = ((0xffff00ffU 
                                            & vlSelf->cpu__DOT__red__DOT__readata) 
                                           | (vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array
                                              [(0xfffU 
                                                & ((IData)(1U) 
                                                   + vlSelf->cpu__DOT__red__DOT__ALUout))] 
                                              << 8U));
    vlSelf->cpu__DOT__red__DOT__readata = ((0xff00ffffU 
                                            & vlSelf->cpu__DOT__red__DOT__readata) 
                                           | (vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array
                                              [(0xfffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__red__DOT__ALUout))] 
                                              << 0x10U));
    vlSelf->cpu__DOT__red__DOT__readata = ((0xffffffU 
                                            & vlSelf->cpu__DOT__red__DOT__readata) 
                                           | (vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array
                                              [(0xfffU 
                                                & ((IData)(3U) 
                                                   + vlSelf->cpu__DOT__red__DOT__ALUout))] 
                                              << 0x18U));
    vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch 
        = (1U & (IData)(((0x60U == (0x70U & vlSelf->cpu__DOT__instr)) 
                         & ((8U & vlSelf->cpu__DOT__instr)
                             ? (IData)((7U == (7U & vlSelf->cpu__DOT__instr)))
                             : ((4U & vlSelf->cpu__DOT__instr)
                                 ? ((vlSelf->cpu__DOT__instr 
                                     >> 1U) & vlSelf->cpu__DOT__instr)
                                 : ((vlSelf->cpu__DOT__instr 
                                     >> 1U) & (vlSelf->cpu__DOT__instr 
                                               & ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->cpu__DOT__instr 
                                                       >> 0xcU)))
                                                   ? 
                                                  (~ (IData)(vlSelf->cpu__DOT__Zero))
                                                   : (IData)(vlSelf->cpu__DOT__Zero)))))))));
    vlSelf->cpu__DOT__PCsrc = vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch;
    vlSelf->cpu__DOT__blue__DOT__next_PC = ((IData)(vlSelf->cpu__DOT__PCsrc)
                                             ? ((IData)(vlSelf->cpu__DOT__JALRctrl)
                                                 ? vlSelf->cpu__DOT__red__DOT__ALUout
                                                 : 
                                                (vlSelf->cpu__DOT__PC 
                                                 + vlSelf->cpu__DOT__ImmOp))
                                             : ((IData)(4U) 
                                                + vlSelf->cpu__DOT__PC));
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
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcpu___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
