// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("utb_CacheBaseCtrl.v", 8, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memreq_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memreq_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memresp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memresp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__memresp_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_req_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_req_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_resp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cache_resp_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__z6b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__darray_write_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__write_en_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__spill_one_word_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__refill_one_word_req_sent = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__refill_one_word_resp_received = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__Spill_or_Refill_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__current_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__spill_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__refill_req_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__refill_resp_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__linetrace = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memreq_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memreq_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memreq_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memresp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memresp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__memresp_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_req_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_req_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_req_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_resp_val = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_resp_rdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__cache_resp_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__reg_en_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__z6b_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__darray_write_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__darray_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__write_en_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__spill_one_word_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__refill_one_word_req_sent = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__refill_one_word_resp_received = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__Spill_or_Refill_sel = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__tarray_match = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__current_dirty = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__spill_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__refill_req_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__refill_resp_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____Vtogcov__flush_done = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__input_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_Y = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__val_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__mem_req_type_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__state_next = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT__ostall_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT__stall_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__input_go = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_Y = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_Y = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__val_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__mem_req_type_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__state_reg = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__state_next = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_M0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__ostall_notrdy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__DUT__DOT____Vtogcov__stall_M0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}