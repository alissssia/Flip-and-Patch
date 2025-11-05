// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_TEST_MECHANISMS_H_
#define VERILATED_VFINAL_INTEGRATION_TEST_MECHANISMS_H_  // guard

#include "verilated.h"
class Vfinal_integration_top_patching_final__M4;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_test_mechanisms final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_top_patching_final__M4* patch_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__start_reading,0,0);
    CData/*0:0*/ __PVT__read_write;
    CData/*0:0*/ __PVT__store_enable;
    CData/*1:0*/ __PVT__state;
    CData/*1:0*/ __PVT__next_state;
    CData/*1:0*/ __PVT__index_counter;
    CData/*1:0*/ __PVT__next_index;
    CData/*0:0*/ __PVT__done_loading;
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
    VL_IN16(__PVT__activation_org[4],15,0);
    VL_IN16(__PVT__activation_cache[4],15,0);
    VL_IN8(__PVT__f[4],0,0);
    VL_IN8(__PVT__p[4],0,0);
    VL_OUT16(__PVT__flipped_out[4],15,0);
    VL_OUT16(__PVT__patched_out[4],15,0);
    VL_OUT16(__PVT__activation_final[4],15,0);

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_test_mechanisms(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_test_mechanisms();
    VL_UNCOPYABLE(Vfinal_integration_test_mechanisms);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
