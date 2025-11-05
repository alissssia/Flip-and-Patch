// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION___024ROOT_H_
#define VERILATED_VFINAL_INTEGRATION___024ROOT_H_  // guard

#include "verilated.h"
class Vfinal_integration_final_integration;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_final_integration* final_integration;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start_reading,0,0);
    VL_IN8(start_scan,0,0);
    VL_OUT8(scan_done,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(count_f,31,0);
    VL_OUT(count_p,31,0);
    IData/*31:0*/ __VactIterCount;
    VL_IN16(activation_org[4],15,0);
    VL_IN16(activation_cache[4],15,0);
    VL_OUT8(f[64],0,0);
    VL_OUT8(p[64],0,0);
    VL_OUT16(flipped_out[4],15,0);
    VL_OUT16(patched_out[4],15,0);
    VL_OUT16(activation_final[4],15,0);
    VL_OUT8(f_m[4],0,0);
    VL_OUT8(p_m[4],0,0);
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration___024root(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration___024root();
    VL_UNCOPYABLE(Vfinal_integration___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
