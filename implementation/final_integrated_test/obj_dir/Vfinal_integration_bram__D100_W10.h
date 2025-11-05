// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_BRAM__D100_W10_H_
#define VERILATED_VFINAL_INTEGRATION_BRAM__D100_W10_H_  // guard

#include "verilated.h"


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_bram__D100_W10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_IN8(__PVT__read_en,0,0);
    VL_IN8(__PVT__write_en,0,0);
    VL_IN8(__PVT__addr_read,7,0);
    VL_IN8(__PVT__addr_write,7,0);
    VL_IN16(__PVT__data_in,15,0);
    VL_OUT16(__PVT__data_out,15,0);
    VlUnpacked<SData/*15:0*/, 256> ram;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_bram__D100_W10(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_bram__D100_W10();
    VL_UNCOPYABLE(Vfinal_integration_bram__D100_W10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
