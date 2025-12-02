// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_TEST_ENSEMBLE_H_
#define VERILATED_VFINAL_INTEGRATION_TEST_ENSEMBLE_H_  // guard

#include "verilated.h"
class Vfinal_integration_top_patching_final__M4;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_test_ensemble final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_top_patching_final__M4* patch_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__start_reading,0,0);
    VL_OUT8(__PVT__cache_write_finished,0,0);
    VL_OUT8(__PVT__finished,0,0);
    CData/*1:0*/ __PVT__p_state;
    CData/*1:0*/ __PVT__p_next_state;
    CData/*0:0*/ __PVT__p_request;
    CData/*0:0*/ __PVT__p_read_write;
    CData/*1:0*/ __PVT__p_index;
    CData/*0:0*/ __PVT__p_store_enable;
    CData/*0:0*/ __PVT__reading;
    SData/*15:0*/ __PVT__p_activation_in;
    IData/*31:0*/ __PVT__p_fill_addr;
    IData/*31:0*/ __PVT__p_next_fill_addr;
    IData/*31:0*/ __PVT__p_read_addr;
    IData/*31:0*/ __PVT__p_next_read_addr;
    IData/*20:0*/ __PVT__p_address;
    IData/*31:0*/ __PVT__base_idx;
    VL_IN16(__PVT__activation_org[64],15,0);
    VL_IN16(__PVT__activation_cache_full[64],15,0);
    VL_IN8(__PVT__f[64],0,0);
    VL_IN8(__PVT__p[64],0,0);
    VL_OUT16(__PVT__flipped_global[64],15,0);
    VL_OUT16(__PVT__patched_global[64],15,0);
    VL_OUT16(__PVT__final_global[64],15,0);
    VL_OUT16(__PVT__original_activation[4],15,0);
    VL_OUT8(__PVT__dbg_idx[4],5,0);
    VlUnpacked<SData/*15:0*/, 4> __PVT__flipped_block;
    VlUnpacked<SData/*15:0*/, 4> __PVT__patched_block;
    VlUnpacked<SData/*15:0*/, 4> __PVT__final_choice;
    VlUnpacked<SData/*15:0*/, 4> __PVT__patched_from_cache;
    VlUnpacked<SData/*15:0*/, 64> __PVT__patched_mem;
    VlUnpacked<SData/*15:0*/, 4> __PVT__activation_org_patch;
    VlUnpacked<CData/*0:0*/, 4> __PVT__p_patch;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_test_ensemble(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_test_ensemble();
    VL_UNCOPYABLE(Vfinal_integration_test_ensemble);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
