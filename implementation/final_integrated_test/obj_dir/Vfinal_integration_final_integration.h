// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfinal_integration.h for the primary calling header

#ifndef VERILATED_VFINAL_INTEGRATION_FINAL_INTEGRATION_H_
#define VERILATED_VFINAL_INTEGRATION_FINAL_INTEGRATION_H_  // guard

#include "verilated.h"
class Vfinal_integration_test_ensemble;


class Vfinal_integration__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration_final_integration final : public VerilatedModule {
  public:
    // CELLS
    Vfinal_integration_test_ensemble* ensemble;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start_reading,0,0);
    VL_IN8(start_scan,0,0);
    VL_OUT8(scan_done,0,0);
    VL_OUT8(__PVT__cache_write_finished,0,0);
    VL_OUT8(__PVT__finished,0,0);
    CData/*0:0*/ __PVT__all_done;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__mem_write_enable;
    CData/*5:0*/ __PVT__rellenar_fallos__DOT__mem_addr;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__done_read1;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__error_type1;
    CData/*0:0*/ __PVT__rellenar_fallos__DOT__done_read0;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__error_type0;
    CData/*2:0*/ __PVT__rellenar_fallos__DOT__current_state;
    CData/*2:0*/ __PVT__rellenar_fallos__DOT__next_state;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__barrido_1s__DOT__current_state;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__barrido_1s__DOT__next_state;
    CData/*5:0*/ __PVT__rellenar_fallos__DOT__barrido_1s__DOT__addr_counter;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__current_state;
    CData/*1:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__next_state;
    CData/*5:0*/ __PVT__rellenar_fallos__DOT__barrido_0s__DOT__addr_counter;
    SData/*15:0*/ __PVT__rellenar_fallos__DOT__unnamedblk3__DOT__keep_mask;
    SData/*15:0*/ __PVT__rellenar_fallos__DOT__unnamedblk3__DOT__forced1;
    VL_OUT(count_f,31,0);
    VL_OUT(count_p,31,0);
    VL_IN16(activation_org[64],15,0);
    VL_IN16(activation_cache_full[64],15,0);
    VL_OUT8(f[64],0,0);
    VL_OUT8(p[64],0,0);
    VL_OUT16(flipped_out[64],15,0);
    VL_OUT16(patched_out[64],15,0);
    VL_OUT16(activation_final[64],15,0);
    VL_OUT16(original_activation[4],15,0);
    VL_OUT8(dbg_idx[4],5,0);
    VlUnpacked<CData/*0:0*/, 64> __PVT__flipping_bit;
    VlUnpacked<CData/*0:0*/, 64> __PVT__patching_bit;
    VlUnpacked<SData/*15:0*/, 64> __PVT__rellenar_fallos__DOT__memory;
    VlUnpacked<SData/*15:0*/, 64> __PVT__rellenar_fallos__DOT__stuck0_mask;
    VlUnpacked<SData/*15:0*/, 64> __PVT__rellenar_fallos__DOT__stuck1_mask;

    // INTERNAL VARIABLES
    Vfinal_integration__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfinal_integration_final_integration(Vfinal_integration__Syms* symsp, const char* v__name);
    ~Vfinal_integration_final_integration();
    VL_UNCOPYABLE(Vfinal_integration_final_integration);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
