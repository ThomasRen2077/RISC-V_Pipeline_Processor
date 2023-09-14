// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20.h"

VL_INLINE_OPT void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__src__msg_delay__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__src__msg_delay__rand_delay_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (((IData)(vlSelf->__PVT__reset) | (IData)(vlSelf->__PVT__en))) {
        vlSelf->__Vdly__q = ((IData)(vlSelf->__PVT__reset)
                              ? 0U : vlSelf->__PVT__d);
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__sink__msg_delay__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___nba_sequent__TOP__top__sink__msg_delay__rand_delay_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (((IData)(vlSelf->__PVT__reset) | (IData)(vlSelf->__PVT__en))) {
        vlSelf->__Vdly__q = ((IData)(vlSelf->__PVT__reset)
                              ? 0U : vlSelf->__PVT__d);
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
}