// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_LAB3_CACHE_CACHEBASEDPATH_H_
#define VERILATED_VTOP_LAB3_CACHE_CACHEBASEDPATH_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
class Vtop_lab3_cache_Mux16__P20;
class Vtop_vc_EnResetReg__P20;
class Vtop_vc_Mux2__P10;
class Vtop_vc_Mux2__P200;
class Vtop_vc_Mux2__P20;
class Vtop_vc_Mux2__P5;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_lab3_cache_CacheBaseDpath final : public VerilatedModule {
  public:
    // CELLS
    Vtop_vc_EnResetReg__P20* __PVT__cache_request_addr_reg_M0;
    Vtop_vc_EnResetReg__P20* __PVT__cache_request_data_reg_M0;
    Vtop_vc_Mux2__P20* __PVT__z6b_mux;
    Vtop_vc_Mux2__P5* __PVT__spill_index_mux;
    Vtop_vc_Mux2__P20* __PVT__Spill_or_Refill_Mux;
    Vtop_vc_Mux2__P200* __PVT__darray_write_mux;
    Vtop_vc_Mux2__P10* __PVT__word_en_mux;
    Vtop_lab3_cache_Mux16__P20* __PVT__output_mux;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__reg_en_M0,0,0);
        VL_IN8(__PVT__tarray_en,0,0);
        VL_IN8(__PVT__tarray_wen,0,0);
        VL_IN8(__PVT__z6b_sel,0,0);
        VL_IN8(__PVT__darray_write_mux_sel,0,0);
        VL_IN8(__PVT__darray_wen,0,0);
        VL_IN8(__PVT__write_en_sel,0,0);
        VL_IN8(__PVT__spill_one_word_done,0,0);
        VL_IN8(__PVT__refill_one_word_req_sent,0,0);
        VL_IN8(__PVT__refill_one_word_resp_received,0,0);
        VL_IN8(__PVT__Spill_or_Refill_sel,0,0);
        VL_OUT8(__PVT__tarray_match,0,0);
        VL_OUT8(__PVT__current_dirty,0,0);
        VL_OUT8(__PVT__spill_done,0,0);
        VL_OUT8(__PVT__refill_req_done,0,0);
        VL_OUT8(__PVT__refill_resp_done,0,0);
        VL_IN8(__PVT__flush,0,0);
        VL_OUT8(__PVT__flush_done,0,0);
        CData/*4:0*/ __PVT__index_M0;
        CData/*3:0*/ __PVT__offset_M0;
        CData/*4:0*/ __PVT__spill_counter;
        CData/*5:0*/ __PVT__flush_counter;
        CData/*4:0*/ __Vcellinp__spill_index_mux__in1;
        CData/*4:0*/ __PVT__index_spill;
        CData/*4:0*/ __PVT__refill_req_counter;
        CData/*4:0*/ __PVT__refill_resp_counter;
        CData/*0:0*/ __Vtogcov__clk;
        CData/*0:0*/ __Vtogcov__reset;
        CData/*0:0*/ __Vtogcov__reg_en_M0;
        CData/*0:0*/ __Vtogcov__tarray_en;
        CData/*0:0*/ __Vtogcov__tarray_wen;
        CData/*0:0*/ __Vtogcov__z6b_sel;
        CData/*0:0*/ __Vtogcov__darray_write_mux_sel;
        CData/*0:0*/ __Vtogcov__darray_wen;
        CData/*0:0*/ __Vtogcov__write_en_sel;
        CData/*0:0*/ __Vtogcov__spill_one_word_done;
        CData/*0:0*/ __Vtogcov__refill_one_word_req_sent;
        CData/*0:0*/ __Vtogcov__refill_one_word_resp_received;
        CData/*0:0*/ __Vtogcov__Spill_or_Refill_sel;
        CData/*0:0*/ __Vtogcov__tarray_match;
        CData/*0:0*/ __Vtogcov__current_dirty;
        CData/*0:0*/ __Vtogcov__spill_done;
        CData/*0:0*/ __Vtogcov__refill_req_done;
        CData/*0:0*/ __Vtogcov__refill_resp_done;
        CData/*0:0*/ __Vtogcov__flush;
        CData/*0:0*/ __Vtogcov__flush_done;
        CData/*4:0*/ __Vtogcov__index_M0;
        CData/*3:0*/ __Vtogcov__offset_M0;
        CData/*4:0*/ __Vtogcov__spill_counter;
        CData/*5:0*/ __Vtogcov__flush_counter;
        CData/*4:0*/ __Vtogcov__index_spill;
        CData/*4:0*/ __Vtogcov__refill_req_counter;
        CData/*4:0*/ __Vtogcov__refill_resp_counter;
        CData/*5:0*/ __PVT__unnamedblk1__DOT__i;
        CData/*5:0*/ __PVT__unnamedblk2__DOT__i;
        CData/*0:0*/ __Vdlyvset__tag_array__v0;
        CData/*0:0*/ __Vdlyvset__tag_array__v1;
        CData/*0:0*/ __Vdlyvset__tag_array__v2;
        CData/*0:0*/ __Vdlyvset__tag_array__v3;
        CData/*0:0*/ __Vdlyvset__tag_array__v4;
        CData/*0:0*/ __Vdlyvset__tag_array__v5;
        CData/*0:0*/ __Vdlyvset__tag_array__v6;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__tag_array__v7;
        CData/*0:0*/ __Vdlyvset__tag_array__v8;
        CData/*0:0*/ __Vdlyvset__tag_array__v9;
        CData/*0:0*/ __Vdlyvset__tag_array__v10;
        CData/*0:0*/ __Vdlyvset__tag_array__v11;
        CData/*0:0*/ __Vdlyvset__tag_array__v12;
        CData/*0:0*/ __Vdlyvset__tag_array__v13;
        CData/*0:0*/ __Vdlyvset__tag_array__v14;
        CData/*0:0*/ __Vdlyvset__tag_array__v15;
        CData/*0:0*/ __Vdlyvset__tag_array__v16;
        CData/*0:0*/ __Vdlyvset__tag_array__v17;
        CData/*0:0*/ __Vdlyvset__tag_array__v18;
        CData/*0:0*/ __Vdlyvset__tag_array__v19;
        CData/*0:0*/ __Vdlyvset__tag_array__v20;
        CData/*0:0*/ __Vdlyvset__tag_array__v21;
        CData/*0:0*/ __Vdlyvset__tag_array__v22;
        CData/*0:0*/ __Vdlyvset__tag_array__v23;
        CData/*0:0*/ __Vdlyvset__tag_array__v24;
        CData/*0:0*/ __Vdlyvset__tag_array__v25;
        CData/*0:0*/ __Vdlyvset__tag_array__v26;
        CData/*0:0*/ __Vdlyvset__tag_array__v27;
        CData/*0:0*/ __Vdlyvset__tag_array__v28;
        CData/*0:0*/ __Vdlyvset__tag_array__v29;
        CData/*0:0*/ __Vdlyvset__tag_array__v30;
        CData/*0:0*/ __Vdlyvset__tag_array__v31;
        CData/*4:0*/ __Vdlyvdim0__tag_array__v32;
        CData/*0:0*/ __Vdlyvset__tag_array__v32;
        CData/*4:0*/ __Vdlyvdim0__valid_array__v32;
        CData/*0:0*/ __Vdlyvval__valid_array__v32;
        CData/*4:0*/ __Vdlyvdim0__tag_array__v33;
        CData/*0:0*/ __Vdlyvset__tag_array__v33;
        CData/*4:0*/ __Vdlyvdim0__valid_array__v33;
        CData/*4:0*/ __Vdly__spill_counter;
        CData/*5:0*/ __Vdly__flush_counter;
        CData/*4:0*/ __Vdly__refill_req_counter;
        CData/*4:0*/ __Vdly__refill_resp_counter;
        CData/*0:0*/ __Vdlyvset__data_array__v0;
        CData/*0:0*/ __Vdlyvset__data_array__v1;
        CData/*0:0*/ __Vdlyvset__data_array__v2;
        CData/*0:0*/ __Vdlyvset__data_array__v3;
        CData/*0:0*/ __Vdlyvset__data_array__v4;
        CData/*0:0*/ __Vdlyvset__data_array__v5;
        CData/*0:0*/ __Vdlyvset__data_array__v6;
        CData/*0:0*/ __Vdlyvset__data_array__v7;
        CData/*0:0*/ __Vdlyvset__data_array__v8;
        CData/*0:0*/ __Vdlyvset__data_array__v9;
        CData/*0:0*/ __Vdlyvset__data_array__v10;
        CData/*0:0*/ __Vdlyvset__data_array__v11;
        CData/*0:0*/ __Vdlyvset__data_array__v12;
        CData/*0:0*/ __Vdlyvset__data_array__v13;
        CData/*0:0*/ __Vdlyvset__data_array__v14;
        CData/*0:0*/ __Vdlyvset__data_array__v15;
        CData/*0:0*/ __Vdlyvset__data_array__v16;
        CData/*0:0*/ __Vdlyvset__data_array__v17;
        CData/*0:0*/ __Vdlyvset__data_array__v18;
        CData/*0:0*/ __Vdlyvset__data_array__v19;
        CData/*0:0*/ __Vdlyvset__data_array__v20;
        CData/*0:0*/ __Vdlyvset__data_array__v21;
        CData/*0:0*/ __Vdlyvset__data_array__v22;
        CData/*0:0*/ __Vdlyvset__data_array__v23;
        CData/*0:0*/ __Vdlyvset__data_array__v24;
        CData/*0:0*/ __Vdlyvset__data_array__v25;
        CData/*0:0*/ __Vdlyvset__data_array__v26;
        CData/*0:0*/ __Vdlyvset__data_array__v27;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__data_array__v28;
        CData/*0:0*/ __Vdlyvset__data_array__v29;
        CData/*0:0*/ __Vdlyvset__data_array__v30;
        CData/*0:0*/ __Vdlyvset__data_array__v31;
        CData/*4:0*/ __Vdlyvdim0__dirty_array__v32;
        CData/*0:0*/ __Vdlyvval__dirty_array__v32;
        CData/*0:0*/ __Vdlyvset__dirty_array__v32;
        CData/*4:0*/ __Vdlyvdim0__data_array__v32;
        CData/*4:0*/ __Vdlyvdim0__dirty_array__v33;
        CData/*0:0*/ __Vdlyvset__dirty_array__v33;
        CData/*4:0*/ __Vdlyvdim0__dirty_array__v34;
        CData/*0:0*/ __Vdlyvset__dirty_array__v34;
        CData/*4:0*/ __Vdlyvdim0__data_array__v33;
        CData/*0:0*/ __Vdlyvset__data_array__v33;
        CData/*4:0*/ __Vdlyvdim0__data_array__v34;
        CData/*0:0*/ __Vdlyvset__data_array__v34;
        CData/*4:0*/ __Vdlyvdim0__data_array__v35;
        CData/*0:0*/ __Vdlyvset__data_array__v35;
        CData/*4:0*/ __Vdlyvdim0__data_array__v36;
        CData/*0:0*/ __Vdlyvset__data_array__v36;
        CData/*4:0*/ __Vdlyvdim0__data_array__v37;
        CData/*0:0*/ __Vdlyvset__data_array__v37;
        CData/*4:0*/ __Vdlyvdim0__data_array__v38;
        CData/*0:0*/ __Vdlyvset__data_array__v38;
        CData/*4:0*/ __Vdlyvdim0__data_array__v39;
        CData/*0:0*/ __Vdlyvset__data_array__v39;
        CData/*4:0*/ __Vdlyvdim0__data_array__v40;
        CData/*0:0*/ __Vdlyvset__data_array__v40;
        CData/*4:0*/ __Vdlyvdim0__data_array__v41;
        CData/*0:0*/ __Vdlyvset__data_array__v41;
        CData/*4:0*/ __Vdlyvdim0__data_array__v42;
        CData/*0:0*/ __Vdlyvset__data_array__v42;
        CData/*4:0*/ __Vdlyvdim0__data_array__v43;
        CData/*0:0*/ __Vdlyvset__data_array__v43;
        CData/*4:0*/ __Vdlyvdim0__data_array__v44;
        CData/*0:0*/ __Vdlyvset__data_array__v44;
        CData/*4:0*/ __Vdlyvdim0__data_array__v45;
        CData/*0:0*/ __Vdlyvset__data_array__v45;
        CData/*4:0*/ __Vdlyvdim0__data_array__v46;
        CData/*0:0*/ __Vdlyvset__data_array__v46;
        CData/*4:0*/ __Vdlyvdim0__data_array__v47;
        CData/*0:0*/ __Vdlyvset__data_array__v47;
        CData/*4:0*/ __Vdlyvdim0__data_array__v48;
        CData/*0:0*/ __Vdlyvset__data_array__v48;
        SData/*15:0*/ __PVT__write_word_enable;
        SData/*15:0*/ __PVT__offset_write;
        SData/*15:0*/ __Vtogcov__write_word_enable;
        SData/*15:0*/ __Vtogcov__offset_write;
        SData/*8:0*/ __Vdlyvlsb__data_array__v33;
        SData/*8:0*/ __Vdlyvlsb__data_array__v34;
        SData/*8:0*/ __Vdlyvlsb__data_array__v35;
        SData/*8:0*/ __Vdlyvlsb__data_array__v36;
        SData/*8:0*/ __Vdlyvlsb__data_array__v37;
        SData/*8:0*/ __Vdlyvlsb__data_array__v38;
        SData/*8:0*/ __Vdlyvlsb__data_array__v39;
        SData/*8:0*/ __Vdlyvlsb__data_array__v40;
        SData/*8:0*/ __Vdlyvlsb__data_array__v41;
        SData/*8:0*/ __Vdlyvlsb__data_array__v42;
        SData/*8:0*/ __Vdlyvlsb__data_array__v43;
        SData/*8:0*/ __Vdlyvlsb__data_array__v44;
        SData/*8:0*/ __Vdlyvlsb__data_array__v45;
        SData/*8:0*/ __Vdlyvlsb__data_array__v46;
        SData/*8:0*/ __Vdlyvlsb__data_array__v47;
        SData/*8:0*/ __Vdlyvlsb__data_array__v48;
    };
    struct {
        VL_IN(__PVT__memreq_msg_addr,31,0);
        VL_IN(__PVT__memreq_msg_data,31,0);
        VL_OUT(__PVT__memresp_msg_data,31,0);
        VL_OUT(__PVT__cache_req_msg_addr,31,0);
        VL_OUT(__PVT__cache_req_msg_data,31,0);
        VL_IN(__PVT__cache_resp_msg_data,31,0);
        IData/*31:0*/ __PVT__cache_request_addr_M0;
        IData/*31:0*/ __PVT__cache_request_data_M0;
        IData/*20:0*/ __PVT__current_tag;
        IData/*31:0*/ __PVT__z6b_result;
        IData/*31:0*/ __PVT__z6b_mux_result;
        IData/*31:0*/ __PVT__spill_initial_addr;
        IData/*31:0*/ __PVT__spill_addr;
        IData/*31:0*/ __PVT__cache_to_mem_data;
        VlWide<16>/*511:0*/ __PVT__repl_cachereq_data;
        IData/*31:0*/ __PVT__refill_addr;
        VlWide<16>/*511:0*/ __PVT__refill_data;
        VlWide<16>/*511:0*/ __PVT__write_data;
        VlWide<16>/*511:0*/ __PVT__data_array_output;
        IData/*31:0*/ __Vcellinp__output_mux__in15;
        IData/*31:0*/ __Vcellinp__output_mux__in14;
        IData/*31:0*/ __Vcellinp__output_mux__in13;
        IData/*31:0*/ __Vcellinp__output_mux__in12;
        IData/*31:0*/ __Vcellinp__output_mux__in11;
        IData/*31:0*/ __Vcellinp__output_mux__in10;
        IData/*31:0*/ __Vcellinp__output_mux__in9;
        IData/*31:0*/ __Vcellinp__output_mux__in8;
        IData/*31:0*/ __Vcellinp__output_mux__in7;
        IData/*31:0*/ __Vcellinp__output_mux__in6;
        IData/*31:0*/ __Vcellinp__output_mux__in5;
        IData/*31:0*/ __Vcellinp__output_mux__in4;
        IData/*31:0*/ __Vcellinp__output_mux__in3;
        IData/*31:0*/ __Vcellinp__output_mux__in2;
        IData/*31:0*/ __Vcellinp__output_mux__in1;
        IData/*31:0*/ __Vcellinp__output_mux__in0;
        IData/*31:0*/ __Vtogcov__memreq_msg_addr;
        IData/*31:0*/ __Vtogcov__memreq_msg_data;
        IData/*31:0*/ __Vtogcov__memresp_msg_data;
        IData/*31:0*/ __Vtogcov__cache_req_msg_addr;
        IData/*31:0*/ __Vtogcov__cache_req_msg_data;
        IData/*31:0*/ __Vtogcov__cache_resp_msg_data;
        IData/*31:0*/ __Vtogcov__cache_request_addr_M0;
        IData/*31:0*/ __Vtogcov__cache_request_data_M0;
        IData/*20:0*/ __Vtogcov__current_tag;
        IData/*31:0*/ __Vtogcov__z6b_result;
        IData/*31:0*/ __Vtogcov__z6b_mux_result;
        IData/*31:0*/ __Vtogcov__spill_initial_addr;
        IData/*31:0*/ __Vtogcov__spill_addr;
        IData/*31:0*/ __Vtogcov__cache_to_mem_data;
        IData/*31:0*/ __Vtogcov__refill_addr;
        IData/*20:0*/ __Vdlyvval__tag_array__v32;
        IData/*20:0*/ __Vdlyvval__tag_array__v33;
        VlWide<16>/*511:0*/ __Vdly__refill_data;
        VlWide<16>/*511:0*/ __Vdlyvval__data_array__v32;
        IData/*31:0*/ __Vdlyvval__data_array__v33;
        IData/*31:0*/ __Vdlyvval__data_array__v34;
        IData/*31:0*/ __Vdlyvval__data_array__v35;
        IData/*31:0*/ __Vdlyvval__data_array__v36;
        IData/*31:0*/ __Vdlyvval__data_array__v37;
        IData/*31:0*/ __Vdlyvval__data_array__v38;
        IData/*31:0*/ __Vdlyvval__data_array__v39;
        IData/*31:0*/ __Vdlyvval__data_array__v40;
        IData/*31:0*/ __Vdlyvval__data_array__v41;
        IData/*31:0*/ __Vdlyvval__data_array__v42;
    };
    struct {
        IData/*31:0*/ __Vdlyvval__data_array__v43;
        IData/*31:0*/ __Vdlyvval__data_array__v44;
        IData/*31:0*/ __Vdlyvval__data_array__v45;
        IData/*31:0*/ __Vdlyvval__data_array__v46;
        IData/*31:0*/ __Vdlyvval__data_array__v47;
        IData/*31:0*/ __Vdlyvval__data_array__v48;
        VlUnpacked<IData/*20:0*/, 32> __PVT__tag_array;
        VlUnpacked<CData/*0:0*/, 32> __PVT__dirty_array;
        VlUnpacked<CData/*0:0*/, 32> __PVT__valid_array;
        VlUnpacked<VlWide<16>/*511:0*/, 32> __PVT__data_array;
        VlUnpacked<CData/*0:0*/, 32> __Vtogcov__dirty_array;
        VlUnpacked<CData/*0:0*/, 32> __Vtogcov__valid_array;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_lab3_cache_CacheBaseDpath(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_lab3_cache_CacheBaseDpath();
    VL_UNCOPYABLE(Vtop_lab3_cache_CacheBaseDpath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(std::atomic<uint32_t>* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard