// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ top__DOT__ostream_val;
    VL_IN8(linetrace,0,0);
    CData/*0:0*/ top__DOT__reset;
    CData/*0:0*/ top__DOT__istream_val;
    CData/*0:0*/ top__DOT__istream_rdy;
    CData/*0:0*/ top__DOT__ostream_rdy;
    CData/*0:0*/ top__DOT__istream_val_f;
    CData/*0:0*/ top__DOT__ostream_rdy_f;
    CData/*0:0*/ top__DOT____Vtogcov__clk;
    CData/*0:0*/ top__DOT____Vtogcov__linetrace;
    CData/*0:0*/ top__DOT____Vtogcov__reset;
    CData/*0:0*/ top__DOT____Vtogcov__istream_val;
    CData/*0:0*/ top__DOT____Vtogcov__istream_rdy;
    CData/*0:0*/ top__DOT____Vtogcov__ostream_rdy;
    CData/*0:0*/ top__DOT____Vtogcov__ostream_val;
    CData/*0:0*/ top__DOT____Vtogcov__istream_val_f;
    CData/*0:0*/ top__DOT____Vtogcov__ostream_rdy_f;
    CData/*1:0*/ top__DOT__imul__DOT__state;
    CData/*1:0*/ top__DOT__imul__DOT__nextstate;
    CData/*5:0*/ top__DOT__imul__DOT__counter;
    CData/*0:0*/ top__DOT__imul__DOT__next_ostream_val;
    CData/*1:0*/ top__DOT__imul__DOT____Vtogcov__state;
    CData/*1:0*/ top__DOT__imul__DOT____Vtogcov__nextstate;
    CData/*5:0*/ top__DOT__imul__DOT____Vtogcov__counter;
    CData/*0:0*/ top__DOT__imul__DOT____Vtogcov__next_ostream_val;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__ostream_val__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__ostream_msg;
    IData/*31:0*/ top__DOT__istream_msg_a;
    IData/*31:0*/ top__DOT__istream_msg_b;
    IData/*31:0*/ top__DOT____Vtogcov__ostream_msg;
    IData/*31:0*/ top__DOT____Vtogcov__istream_msg_a;
    IData/*31:0*/ top__DOT____Vtogcov__istream_msg_b;
    IData/*31:0*/ top__DOT__unnamedblk1__DOT__x;
    IData/*31:0*/ top__DOT__imul__DOT__a;
    IData/*31:0*/ top__DOT__imul__DOT__b;
    IData/*31:0*/ top__DOT__imul__DOT__next_a;
    IData/*31:0*/ top__DOT__imul__DOT__next_b;
    IData/*31:0*/ top__DOT__imul__DOT__next_ostream_msg;
    IData/*31:0*/ top__DOT__imul__DOT__add_result;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__a;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__b;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__next_a;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__next_b;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__next_ostream_msg;
    IData/*31:0*/ top__DOT__imul__DOT____Vtogcov__add_result;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ top__DOT__istream_msg;
    QData/*63:0*/ top__DOT____Vtogcov__istream_msg;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h3d404bd2__0;
    VlTriggerScheduler __VtrigSched_hc29b8aae__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard