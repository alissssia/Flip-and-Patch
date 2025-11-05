// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_TOP_PATCHING_FINAL__M4_H_
#define VERILATED_VFINAL_INTEGRATION_TOP_PATCHING_FINAL__M4_H_  // guard

#include "verilated.h"
class Vfinal_integration_cache_tfg;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_top_patching_final__M4 final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_cache_tfg* patch_cache;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__request,0,0);
    VL_IN8(__PVT__read_write,0,0);
    VL_IN8(__PVT__index,1,0);
    VL_IN8(__PVT__store_enable,0,0);
    VL_OUT8(__PVT__valid,0,0);
    VL_OUT8(__PVT__error,0,0);
    VL_IN16(__PVT__activation_in,15,0);
    VL_IN(__PVT__address,20,0);
    VL_IN8(__PVT__p[4],0,0);
    VL_IN16(__PVT__activation_org[4],15,0);
    VL_OUT16(__PVT__chosen_activation[4],15,0);
    VlUnpacked<SData/*15:0*/, 4> __PVT__activation_cache;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_top_patching_final__M4(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_top_patching_final__M4();
    VL_UNCOPYABLE(Vfinal_integration_top_patching_final__M4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
