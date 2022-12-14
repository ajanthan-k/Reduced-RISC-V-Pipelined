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
    VlWide<4>/*127:0*/ __Vtemp_hd9ce254c__0;
    // Body
    VL_READMEM_N(true, 8, 4096, 0, std::string{"data.hex"}
                 ,  &(vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array)
                 , 0, ~0ULL);
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[1U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[2U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[3U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[4U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[5U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[6U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[7U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[8U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[9U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xaU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xbU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xcU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xdU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xeU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0xfU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x10U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x11U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x12U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x13U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x14U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x15U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x16U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x17U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x18U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x19U] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1aU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1bU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1cU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1dU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1eU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[0x1fU] = 0U;
    vlSelf->cpu__DOT__red__DOT__register__DOT__unnamedblk1__DOT__i = 0x20U;
    __Vtemp_hd9ce254c__0[0U] = 0x2e686578U;
    __Vtemp_hd9ce254c__0[1U] = 0x6c792e73U;
    __Vtemp_hd9ce254c__0[2U] = 0x73656d62U;
    __Vtemp_hd9ce254c__0[3U] = 0x6173U;
    VL_READMEM_N(true, 8, 4096, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_hd9ce254c__0)
                 ,  &(vlSelf->cpu__DOT__rom__DOT__rom_array)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcpu__ConstPool__TABLE_hcefd0738_0;

VL_ATTR_COLD void Vcpu___024root___settle__TOP__0(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___settle__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlSelf->a0 = vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array
        [0xaU];
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

VL_ATTR_COLD void Vcpu___024root___eval_initial(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_initial\n"); );
    // Body
    Vcpu___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vcpu___024root___eval_settle(Vcpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root___eval_settle\n"); );
    // Body
    Vcpu___024root___settle__TOP__0(vlSelf);
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
    vlSelf->cpu__DOT__Zero = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ImmOp = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__PCsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->cpu__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__ImmSrc = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ResultSrc = VL_RAND_RESET_I(2);
    vlSelf->cpu__DOT__JALRctrl = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__blue__DOT__next_PC = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__rom__DOT__rom_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cpu__DOT__ctrl__DOT__dmain__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__red__DOT__SrcA = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__red__DOT__regOp2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__red__DOT__ALUop2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__red__DOT__ALUout = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__red__DOT__readata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__red__DOT__register__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__red__DOT__register__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->cpu__DOT__red__DOT__datamem__DOT__data_mem_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
