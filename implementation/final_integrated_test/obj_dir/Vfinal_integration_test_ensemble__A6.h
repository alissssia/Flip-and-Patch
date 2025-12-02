// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_TEST_ENSEMBLE__A6_H_
#define VERILATED_VFINAL_INTEGRATION_TEST_ENSEMBLE__A6_H_  // guard

#include "verilated.h"
class Vfinal_integration_top_patching_final__M4;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_test_ensemble__A6 final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_top_patching_final__M4* patch_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__start_reading,0,0);
    VL_OUT8(__PVT__cache_write_finished,0,0);
    VL_OUT8(__PVT__finished,0,0);
    CData/*0:0*/ __PVT__request;
    CData/*0:0*/ __PVT__read_write;
    CData/*5:0*/ __PVT__address;
    CData/*1:0*/ __PVT__index;
    CData/*0:0*/ __PVT__store_enable;
    CData/*1:0*/ __PVT__state;
    CData/*1:0*/ __PVT__next_state;
    CData/*5:0*/ __PVT__fill_addr;
    CData/*5:0*/ __PVT__next_fill_addr;
    CData/*3:0*/ __PVT__block_idk;
    CData/*3:0*/ __PVT__next_block_idk;
    CData/*1:0*/ __PVT__index_counter;
    CData/*1:0*/ __PVT__next_index;
    CData/*0:0*/ __PVT__finished_everything;
    CData/*0:0*/ __PVT__block_done;
    CData/*0:0*/ flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    CData/*0:0*/ flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    CData/*0:0*/ flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    CData/*0:0*/ flip_inst__DOT__u1__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    SData/*15:0*/ __PVT__activation_in;
    SData/*15:0*/ flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u0__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__0__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__u0__d;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__1__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__u0__d;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__2__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__u0__d;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellout__genblk1__BRA__3__KET____DOT__u0__q;
    SData/*15:0*/ flip_inst__DOT__u3__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__u0__d;
    IData/*31:0*/ __PVT__unnamedblk2__DOT__unnamedblk3__DOT__idx_i;
    VL_IN16(__PVT__activation_org[64],15,0);
    VL_IN16(__PVT__activation_cache_full[64],15,0);
    VL_IN8(__PVT__f[64],0,0);
    VL_IN8(__PVT__p[64],0,0);
    VL_OUT16(__PVT__flipped_global[64],15,0);
    VL_OUT16(__PVT__patched_global[64],15,0);
    VL_OUT16(__PVT__final_global[64],15,0);
    VL_OUT16(__PVT__original_activation[4],15,0);
    VlUnpacked<SData/*15:0*/, 4> __PVT__flipped_out;
    VlUnpacked<SData/*15:0*/, 4> __PVT__patched_out;
    VlUnpacked<SData/*15:0*/, 4> __PVT__final_choice;
    VlUnpacked<SData/*15:0*/, 64> __PVT__flipped_all;
    VlUnpacked<SData/*15:0*/, 64> __PVT__patched_all;
    VlUnpacked<SData/*15:0*/, 64> __PVT__final_all;
    VlUnpacked<SData/*15:0*/, 4> __PVT__activation_org_block;
    VlUnpacked<CData/*0:0*/, 4> __PVT__f_block;
    VlUnpacked<CData/*0:0*/, 4> __PVT__p_block;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_test_ensemble__A6(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_test_ensemble__A6();
    VL_UNCOPYABLE(Vfinal_integration_test_ensemble__A6);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
