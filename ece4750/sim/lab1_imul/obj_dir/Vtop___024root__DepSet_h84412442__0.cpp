// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str);
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val = 0;
    CData/*0:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str);
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__num = 0;
    VlWide<128>/*4095:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str;
    VL_ZERO_W(4096, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str);
    CData/*7:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__char;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__char = 0;
    IData/*31:0*/ __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__num;
    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__num = 0;
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           66);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (vlSelf->linetrace) {
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] = 0x1ffU;
            if (VL_UNLIKELY((0U < (IData)(vlSelf->top__DOT__imul__DOT__vc_trace__DOT__level)))) {
                VL_WRITEF("%4d: ",32,vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",64,vlSelf->top__DOT__istream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy 
                    = vlSelf->top__DOT__istream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val 
                    = vlSelf->top__DOT__istream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__3__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__4__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__5__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__6__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__2__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__7__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__8__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__9__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__10__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str,0x00000028);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__11__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str, vlSelf->top__DOT__imul__DOT__str);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__12__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str,0x00000020);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__13__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str, vlSelf->top__DOT__imul__DOT__str);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__14__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str,0x00000020);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__15__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str, vlSelf->top__DOT__imul__DOT__str);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__16__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str,0x00000020);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__17__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                if (VL_UNLIKELY((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str,0x00004920);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__18__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                    if (VL_UNLIKELY((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str,0x0000432b);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__19__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    } else if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str,0x0000433f);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__21__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    } else {
                        VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str,0x00004320);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                        while ((0U != (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                            vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                               - (IData)(1U));
                        while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                            VL_ASSIGNSEL_WI(4096,8,
                                            (0xfffU 
                                             & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                            (0xffU 
                                             & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            VL_WRITEF("%c",8,(0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                   ? 0U
                                                   : 
                                                  (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                 | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__20__str[
                                                    (0x7fU 
                                                     & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                                   - (IData)(1U));
                            vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                                   - (IData)(1U));
                        }
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    }
                } else if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str,0x00004420);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__22__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str,0x00003f20);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__23__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                }
                VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str,0x00000029);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                    vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                    = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                            & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                    (0xffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                ? 0U
                                                : (
                                                   __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                                   (((IData)(7U) 
                                                     + 
                                                     (0xfffU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                              | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                                 (0x7fU 
                                                  & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    VL_WRITEF("%c",8,(0xffU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                 ? 0U
                                                 : 
                                                (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                                 (((IData)(7U) 
                                                   + 
                                                   (0xfffU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                               | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__24__str[
                                                  (0x7fU 
                                                   & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                VL_SFORMAT_X(4096,vlSelf->top__DOT__imul__DOT__str
                             ,"%x",32,vlSelf->top__DOT__ostream_msg);
                VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str, vlSelf->top__DOT__imul__DOT__str);
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy 
                    = vlSelf->top__DOT__ostream_rdy;
                __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val 
                    = vlSelf->top__DOT__ostream_val;
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 = 0U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1)))
                                          ? 0U : (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str[
                                                  (((IData)(7U) 
                                                    + 
                                                    (0xfffU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))) 
                                        | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str[
                                           (0x7fU & 
                                            (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1))))))) {
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                        = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1);
                    vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
                }
                if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy) 
                                 & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val)))) {
                    VL_ASSIGN_W(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__str);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__26__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy) 
                                        & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val))))) {
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__num 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1;
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__27__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
                } else if (VL_UNLIKELY(((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy)) 
                                        & (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val)))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str,0x00000023);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__28__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__29__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
                } else if ((1U & ((~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__rdy)) 
                                  & (~ (IData)(__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_val_rdy_str__25__val))))) {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str,0x0000002e);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__30__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__31__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
                } else {
                    VL_CONST_W_1X(4096,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str,0x00000078);
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                              (((IData)(7U) 
                                                + (0xfffU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                               (0x7fU 
                                                & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0))))))) {
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0);
                        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(32, 0U, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, 
                                        (0xffU & ((
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                    ? 0U
                                                    : 
                                                   (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                                    (((IData)(7U) 
                                                      + 
                                                      (0xfffU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                  | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                                     (0x7fU 
                                                      & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        VL_WRITEF("%c",8,(0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1)))
                                                     ? 0U
                                                     : 
                                                    (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                                     (((IData)(7U) 
                                                       + 
                                                       (0xfffU 
                                                        & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))) 
                                                   | (__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_str__32__str[
                                                      (0x7fU 
                                                       & (VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1))))));
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__num 
                        = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__char = 0x20U;
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(32, vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__num)) {
                        VL_ASSIGNSEL_WI(4096,8,(0xfffU 
                                                & VL_MULS_III(32, (IData)(8U), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0)), vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage, __Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__char);
                        VL_WRITEF("%c",8,__Vtask_top__DOT__imul__DOT__vc_trace__DOT__append_chars__33__char);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                            = (vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
                        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx1);
                    }
                    vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U] 
                        = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                    vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
                }
                vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
                vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0 
                    = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__storage[0U];
                vlSelf->top__DOT__imul__DOT__idx0 = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__idx0;
                vlSelf->top__DOT__imul__DOT__idx1 = 0x1ffU;
                while (VL_GTS_III(32, vlSelf->top__DOT__imul__DOT__idx1, vlSelf->top__DOT__imul__DOT__idx0)) {
                    vlSelf->top__DOT__imul__DOT__idx1 
                        = (vlSelf->top__DOT__imul__DOT__idx1 
                           - (IData)(1U));
                }
                VL_WRITEF("\n");
            }
            vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next 
                = ((IData)(1U) + vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles);
            vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
    }
    VL_STOP_MT("../lab1_imul/tb_IntMul.v", 71, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT VlCoroutine Vtop___024root___eval_initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_top__DOT__test_task__42__a;
    __Vtask_top__DOT__test_task__42__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__42__b;
    __Vtask_top__DOT__test_task__42__b = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__45__a;
    __Vtask_top__DOT__test_task__45__a = 0;
    IData/*31:0*/ __Vtask_top__DOT__test_task__45__b;
    __Vtask_top__DOT__test_task__45__b = 0;
    // Body
    VL_WRITEF("Start of Testbench\n");
    vlSelf->top__DOT__reset = 1U;
    vlSelf->top__DOT__istream_msg_a = 0U;
    vlSelf->top__DOT__istream_msg_b = 0U;
    vlSelf->top__DOT__istream_val = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       88);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__reset = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       96);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       97);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #1\n");
    vlSelf->top__DOT__istream_msg_a = 2U;
    vlSelf->top__DOT__istream_msg_b = 3U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           111);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       112);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           115);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       116);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((6U == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:126: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 126, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       130);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       131);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #2\n");
    vlSelf->top__DOT__istream_msg_a = 4U;
    vlSelf->top__DOT__istream_msg_b = 5U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           145);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       146);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           149);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       150);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x14U == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:160: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 160, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       164);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       165);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #3\n");
    vlSelf->top__DOT__istream_msg_a = 3U;
    vlSelf->top__DOT__istream_msg_b = 4U;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           179);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       180);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           183);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       184);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0xcU == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:194: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 194, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       198);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       199);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #4\n");
    vlSelf->top__DOT__istream_msg_a = 0xaU;
    vlSelf->top__DOT__istream_msg_b = 0xdU;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           213);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       214);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    if ((1U & (~ (IData)(vlSelf->top__DOT__ostream_val)))) {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           217);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       218);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY((0x82U == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,vlSelf->top__DOT__istream_msg_a,
                          32,vlSelf->top__DOT__istream_msg_b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:228: Assertion failed in %Ntop: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,vlSelf->top__DOT__istream_msg_a,
                      32,vlSelf->top__DOT__istream_msg_b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 228, "");
        }
    }
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       232);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       233);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Example Test #5\n");
    __Vtask_top__DOT__test_task__42__b = 7U;
    __Vtask_top__DOT__test_task__42__a = 8U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__42__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__42__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__42__a 
                        * __Vtask_top__DOT__test_task__42__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__42__a,
                          32,__Vtask_top__DOT__test_task__42__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__42__a,
                      32,__Vtask_top__DOT__test_task__42__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       244);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Random Test\n");
    __Vtask_top__DOT__test_task__45__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__45__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 1U;
    __Vtask_top__DOT__test_task__45__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__45__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 2U;
    __Vtask_top__DOT__test_task__45__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__45__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 3U;
    __Vtask_top__DOT__test_task__45__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__45__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 4U;
    __Vtask_top__DOT__test_task__45__b = VL_RANDOM_I();
    __Vtask_top__DOT__test_task__45__a = VL_RANDOM_I();
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       277);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_msg_a = __Vtask_top__DOT__test_task__45__a;
    vlSelf->top__DOT__istream_msg_b = __Vtask_top__DOT__test_task__45__b;
    vlSelf->top__DOT__istream_val = 1U;
    vlSelf->top__DOT__ostream_rdy = 0U;
    while ((1U & (~ (IData)(vlSelf->top__DOT__istream_rdy)))) {
        co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(negedge clk)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           285);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       286);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->top__DOT__istream_val = 0U;
    vlSelf->top__DOT__ostream_rdy = 1U;
    if (vlSelf->top__DOT__ostream_val) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
    } else {
        co_await vlSelf->__VtrigSched_hc29b8aae__0.trigger(0U, 
                                                           nullptr, 
                                                           "@([changed] top.ostream_val)", 
                                                           "../lab1_imul/tb_IntMul.v", 
                                                           291);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSymsp->_vm_contextp__->assertOn()) {
        if (VL_LIKELY(((__Vtask_top__DOT__test_task__45__a 
                        * __Vtask_top__DOT__test_task__45__b) 
                       == vlSelf->top__DOT__ostream_msg))) {
            if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
                Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
                VL_WRITEF("OK: in0 = %10#, in1 = %10#, out = %10#\n",
                          32,__Vtask_top__DOT__test_task__45__a,
                          32,__Vtask_top__DOT__test_task__45__b,
                          32,vlSelf->top__DOT__ostream_msg);
            }
        } else if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            VL_WRITEF("[%0t] %%Error: tb_IntMul.v:300: Assertion failed in %Ntop.test_task: Failed: in0 = %10#, in1 = %10#, out = %10#\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      32,__Vtask_top__DOT__test_task__45__a,
                      32,__Vtask_top__DOT__test_task__45__b,
                      32,vlSelf->top__DOT__ostream_msg);
            VL_STOP_MT("../lab1_imul/tb_IntMul.v", 300, "");
        }
    }
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       303);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
    vlSelf->top__DOT__unnamedblk1__DOT__x = 5U;
    co_await vlSelf->__VtrigSched_h3d404bd2__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge clk)", 
                                                       "../lab1_imul/tb_IntMul.v", 
                                                       257);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_WRITEF("Testbench finished at %20# cycles\n",
              64,(((QData)(VL_TIME_UNITED_Q(1)) - 0xaULL) 
                  >> 1U));
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "../lab1_imul/tb_IntMul.v", 
                                       261);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    VL_FINISH_MT("../lab1_imul/tb_IntMul.v", 262, "");
    vlSelf->__Vm_traceActivity[3U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->top__DOT____Vtogcov__clk))) {
        vlSymsp->__Vcoverage[0].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__clk = vlSelf->clk;
    }
    if (((IData)(vlSelf->linetrace) ^ (IData)(vlSelf->top__DOT____Vtogcov__linetrace))) {
        vlSymsp->__Vcoverage[1].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__linetrace = vlSelf->linetrace;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, ((IData)(vlSelf->top__DOT__ostream_val) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__ostream_val__0 
        = vlSelf->top__DOT__ostream_val;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___act_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go 
        = ((IData)(vlSelf->top__DOT__istream_rdy) & (IData)(vlSelf->top__DOT__istream_val));
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go 
        = ((IData)(vlSelf->top__DOT__ostream_rdy) & (IData)(vlSelf->top__DOT__ostream_val));
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__istream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
                    vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go)))) {
                    vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__ostream_go 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go;
    }
    vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next 
        = vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go)))) {
            vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        }
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__istream_go) {
            vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 1U;
        }
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 2U;
        }
    } else if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if (vlSelf->top__DOT__imul__DOT__ctrl__DOT__ostream_go) {
            vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)
                ? (IData)(vlSelf->top__DOT__istream_msg)
                : 0U) : vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out);
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
        = ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
            ? ((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)
                ? (IData)((vlSelf->top__DOT__istream_msg 
                           >> 0x20U)) : 0U) : vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out);
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_next)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[353].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[354].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[355].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[356].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[357].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[358].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[360].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[361].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[367].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[368].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[371].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[373].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[374].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[376].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->top__DOT__reset) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles = 0U;
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles 
            = vlSelf->top__DOT__imul__DOT__vc_trace__DOT__cycles_next;
        vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg 
            = vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_next;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
    }
    if (vlSelf->top__DOT__imul__DOT__result_reg_en) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_reg_en)))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
        = vlSelf->top__DOT__imul__DOT__dpath__DOT__a_mux_out;
    vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
        = vlSelf->top__DOT__imul__DOT__dpath__DOT__b_mux_out;
    if ((0U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
        vlSelf->top__DOT__istream_rdy = 1U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 1U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 1U;
        vlSelf->top__DOT__ostream_val = 0U;
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
            vlSelf->top__DOT__istream_rdy = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
        } else if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            vlSelf->top__DOT__imul__DOT__result_reg_en = 1U;
            vlSelf->top__DOT__istream_rdy = 0U;
            vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
            vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
            vlSelf->top__DOT__ostream_val = 0U;
            vlSelf->top__DOT__imul__DOT__add_mux_sel = 1U;
        }
    } else {
        vlSelf->top__DOT__imul__DOT__result_reg_en = 0U;
        vlSelf->top__DOT__istream_rdy = 0U;
        vlSelf->top__DOT__imul__DOT__result_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__a_mux_sel = 0U;
        vlSelf->top__DOT__imul__DOT__b_mux_sel = 0U;
        vlSelf->top__DOT__ostream_val = (2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg));
        vlSelf->top__DOT__imul__DOT__add_mux_sel = 0U;
    }
    if ((0U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
        if ((1U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
            if ((0U != vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
            }
            if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
                    vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
            if ((2U == (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg))) {
                vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg 
            = ((2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg 
            = ((1U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__state_reg)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT__state_reg)));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__a_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
               ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[198].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
          ^ vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__product 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT____Vtogcov__product) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out));
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
           + vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out);
    if ((0U != (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
        if ((1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
            if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                          >> 1U)))) {
                if ((4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                    vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                              >> 2U)))) {
                    if ((8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                                  >> 3U)))) {
                        if ((0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                            vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                                      >> 4U)))) {
                            if ((0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                                vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                                          >> 5U)))) {
                                if ((0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                                    vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((1U & (~ (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                                              >> 6U)))) {
                                    if ((0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                                        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
                vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
            vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb)))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_lsb 
            = (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out);
    }
    if (((0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__is_b_zero))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__is_b_zero 
            = (0U == vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out);
    }
    if ((1U & ((~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh)))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__ctrl__DOT____Vtogcov__do_sh 
            = (1U & (~ vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__b_reg_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out));
    }
    if ((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0U == (0xffU & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 8U;
    } else if ((1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 1U;
    } else if ((2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 1U;
    } else if ((4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 2U;
    } else if ((8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 3U;
    } else if ((0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 4U;
    } else if ((0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 5U;
    } else if ((0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out)) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 6U;
    } else if (VL_LIKELY((0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out))) {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 7U;
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out = 0U;
        VL_STOP_MT("../lab1_imul/CalcShamt.v", 26, "");
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out));
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_reg_en) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_reg_en 
            = vlSelf->top__DOT__imul__DOT__result_reg_en;
    }
    if (((IData)(vlSelf->top__DOT__istream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[4].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_rdy = vlSelf->top__DOT__istream_rdy;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__result_mux_sel 
            = vlSelf->top__DOT__imul__DOT__result_mux_sel;
    }
    if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__a_mux_sel) {
            vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
            vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel)))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__a_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__a_mux_sel 
            = vlSelf->top__DOT__imul__DOT__a_mux_sel;
    }
    if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__b_mux_sel) {
            vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
            vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel)))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__b_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__b_mux_sel 
            = vlSelf->top__DOT__imul__DOT__b_mux_sel;
    }
    if (((IData)(vlSelf->top__DOT__ostream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_val = vlSelf->top__DOT__ostream_val;
    }
    vlSelf->top__DOT__ostream_msg = (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out 
                                     & (- (IData)((IData)(vlSelf->top__DOT__ostream_val))));
    if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__add_mux_sel) {
            vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
            vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                = vlSelf->top__DOT__imul__DOT__dpath__DOT__result_reg_out;
        } else {
            vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out = 0U;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
            vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__add_out;
    }
    if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
        if (vlSelf->top__DOT__imul__DOT__result_mux_sel) {
            vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__result_mux_sel)))) {
            vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        }
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out = 0U;
    } else {
        vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
            = vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel)))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__imul__DOT__add_mux_sel) 
         ^ (IData)(vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT____Vtogcov__add_mux_sel 
            = vlSelf->top__DOT__imul__DOT__add_mux_sel;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xeU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (1U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xdU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (2U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((0xbU & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (4U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out) 
               ^ (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out 
            = ((7U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__calc_shamt_out)) 
               | (8U & (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out)));
    }
    vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__b_reg_out 
           >> (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out));
    vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
        = (vlSelf->top__DOT__imul__DOT__dpath__DOT__a_reg_out 
           << (IData)(vlSelf->top__DOT__imul__DOT__dpath__DOT__calc_shamt_out));
    if ((1U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[71].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (1U & vlSelf->top__DOT__ostream_msg));
    }
    if ((2U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[72].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (2U & vlSelf->top__DOT__ostream_msg));
    }
    if ((4U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[73].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (4U & vlSelf->top__DOT__ostream_msg));
    }
    if ((8U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[74].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (8U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[75].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffefU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[76].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[77].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[78].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[79].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[80].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[81].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[82].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[83].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffefffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[84].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[85].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[86].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[87].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[88].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[89].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__ostream_msg 
                     ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[90].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[91].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffefffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x100000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[92].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x200000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[93].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x400000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__ostream_msg 
                      ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[94].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x800000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[95].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x1000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[96].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x2000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[97].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x4000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__ostream_msg 
                       ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[98].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x8000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[99].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xefffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x10000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x20000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__ostream_msg 
                        ^ vlSelf->top__DOT____Vtogcov__ostream_msg))) {
        vlSymsp->__Vcoverage[101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x40000000U & vlSelf->top__DOT__ostream_msg));
    }
    if (((vlSelf->top__DOT__ostream_msg ^ vlSelf->top__DOT____Vtogcov__ostream_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_msg = 
            ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__ostream_msg) 
             | (0x80000000U & vlSelf->top__DOT__ostream_msg));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__add_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__add_mux_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__rshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__rshifter_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[328].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[331].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[333].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[334].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[335].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[336].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[337].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[338].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[339].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[340].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[341].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[343].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[344].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[345].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[349].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[350].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out))) {
        vlSymsp->__Vcoverage[351].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[352].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__lshifter_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__lshifter_out));
    }
    if ((1U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffeU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (1U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((2U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffdU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (2U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((4U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffffbU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (4U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((8U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
               ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffff7U & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (8U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffefU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffdfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffffbfU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                  ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffff7fU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffeffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffdffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffffbffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                   ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffff7ffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffefffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffdfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffffbfffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                    ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffff7fffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffeffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffdffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfffbffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x80000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                     ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfff7ffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x100000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffefffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x100000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x200000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffdfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x200000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x400000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xffbfffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x400000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x800000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                      ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xff7fffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x800000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x1000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfeffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x1000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x2000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfdffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x2000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x4000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xfbffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x4000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x8000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                       ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xf7ffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x8000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x10000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xefffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x10000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x20000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xdfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x20000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if ((0x40000000U & (vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
                        ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0xbfffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x40000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
    if (((vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out 
          ^ vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out 
            = ((0x7fffffffU & vlSelf->top__DOT__imul__DOT__dpath__DOT____Vtogcov__result_mux_out) 
               | (0x80000000U & vlSelf->top__DOT__imul__DOT__dpath__DOT__result_mux_out));
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    if (((IData)(vlSelf->top__DOT__reset) ^ (IData)(vlSelf->top__DOT____Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__reset = vlSelf->top__DOT__reset;
    }
    if (((IData)(vlSelf->top__DOT__istream_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[3].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_val = vlSelf->top__DOT__istream_val;
    }
    if (((IData)(vlSelf->top__DOT__ostream_rdy) ^ (IData)(vlSelf->top__DOT____Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__ostream_rdy = vlSelf->top__DOT__ostream_rdy;
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (1U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (2U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (4U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (8U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[115].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_a 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_a 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_a 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_a 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_a 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_a 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_a))) {
        vlSymsp->__Vcoverage[135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if (((vlSelf->top__DOT__istream_msg_a ^ vlSelf->top__DOT____Vtogcov__istream_msg_a) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_a 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_a) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_a));
    }
    if ((1U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (1U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((2U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (2U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((4U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (4U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((8U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (8U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80U & (vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800U & (vlSelf->top__DOT__istream_msg_b 
                   ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[148].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000U & (vlSelf->top__DOT__istream_msg_b 
                    ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x80000U & (vlSelf->top__DOT__istream_msg_b 
                     ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x100000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x100000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x200000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x200000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x400000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x400000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x800000U & (vlSelf->top__DOT__istream_msg_b 
                      ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x800000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x1000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x1000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x2000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x2000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x4000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x4000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x8000000U & (vlSelf->top__DOT__istream_msg_b 
                       ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x8000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x10000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x10000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x20000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x20000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if ((0x40000000U & (vlSelf->top__DOT__istream_msg_b 
                        ^ vlSelf->top__DOT____Vtogcov__istream_msg_b))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x40000000U & vlSelf->top__DOT__istream_msg_b));
    }
    if (((vlSelf->top__DOT__istream_msg_b ^ vlSelf->top__DOT____Vtogcov__istream_msg_b) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg_b 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__istream_msg_b) 
               | (0x80000000U & vlSelf->top__DOT__istream_msg_b));
    }
    vlSelf->top__DOT__istream_msg = (((QData)((IData)(vlSelf->top__DOT__istream_msg_a)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__istream_msg_b)));
    if ((1U & ((IData)(vlSelf->top__DOT__istream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__istream_msg)))) {
        vlSymsp->__Vcoverage[5].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffeULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__istream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[6].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffdULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 1U))))) 
                << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[7].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffffbULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 2U))))) 
                << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[8].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffff7ULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 3U))))) 
                << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[9].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffefULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 4U))))) 
                << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[10].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffdfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 5U))))) 
                << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[11].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffffbfULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 6U))))) 
                << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[12].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffff7fULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 7U))))) 
                << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[13].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffeffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 8U))))) 
                << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[14].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffdffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 9U))))) 
                << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[15].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffffbffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xaU))))) 
                << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[16].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffff7ffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xbU))))) 
                << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[17].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffefffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xcU))))) 
                << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[18].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffdfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xdU))))) 
                << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[19].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffffbfffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xeU))))) 
                << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[20].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffff7fffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0xfU))))) 
                << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[21].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffeffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x10U))))) 
                << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[22].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffdffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x11U))))) 
                << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[23].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffffbffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x12U))))) 
                << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[24].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffff7ffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x13U))))) 
                << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[25].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffefffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x14U))))) 
                << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[26].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffdfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x15U))))) 
                << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[27].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffffbfffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x16U))))) 
                << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[28].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffff7fffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x17U))))) 
                << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[29].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffeffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x18U))))) 
                << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[30].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffdffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x19U))))) 
                << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[31].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffffbffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1aU))))) 
                << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[32].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffff7ffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1bU))))) 
                << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[33].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffefffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1cU))))) 
                << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[34].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffdfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1dU))))) 
                << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[35].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffffbfffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1eU))))) 
                << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[36].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffff7fffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x1fU))))) 
                << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffeffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x20U))))) 
                << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffdffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x21U))))) 
                << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffffbffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x22U))))) 
                << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffff7ffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x23U))))) 
                << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffefffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x24U))))) 
                << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffdfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x25U))))) 
                << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffffbfffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x26U))))) 
                << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffff7fffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x27U))))) 
                << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffeffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x28U))))) 
                << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffdffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x29U))))) 
                << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffffbffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2aU))))) 
                << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffff7ffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2bU))))) 
                << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffefffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2cU))))) 
                << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffdfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2dU))))) 
                << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2eU))))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffffbfffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2eU))))) 
                << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x2fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x2fU))))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffff7fffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x2fU))))) 
                << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x30U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x30U))))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffeffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x30U))))) 
                << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x31U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x31U))))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffdffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x31U))))) 
                << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x32U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x32U))))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfffbffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x32U))))) 
                << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x33U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x33U))))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfff7ffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x33U))))) 
                << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x34U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x34U))))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffefffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x34U))))) 
                << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x35U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x35U))))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffdfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x35U))))) 
                << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x36U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x36U))))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xffbfffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x36U))))) 
                << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x37U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x37U))))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xff7fffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x37U))))) 
                << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x38U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x38U))))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfeffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x38U))))) 
                << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x39U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x39U))))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfdffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x39U))))) 
                << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3aU))))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xfbffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3aU))))) 
                << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3bU))))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xf7ffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3bU))))) 
                << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3cU))))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xefffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3cU))))) 
                << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3dU))))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xdfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3dU))))) 
                << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__istream_msg 
                        >> 0x3eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__istream_msg 
                                              >> 0x3eU))))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0xbfffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3eU))))) 
                << 0x3eU));
    }
    if ((IData)(((vlSelf->top__DOT__istream_msg ^ vlSelf->top__DOT____Vtogcov__istream_msg) 
                 >> 0x3fU))) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__istream_msg = 
            ((0x7fffffffffffffffULL & vlSelf->top__DOT____Vtogcov__istream_msg) 
             | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__istream_msg 
                                               >> 0x3fU))))) 
                << 0x3fU));
    }
}