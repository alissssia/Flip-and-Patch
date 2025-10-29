// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench_fallos.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_FALLOS___024ROOT_H_
#define VERILATED_VTESTBENCH_FALLOS___024ROOT_H_  // guard

#include "verilated.h"


class Vtestbench_fallos__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench_fallos___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(rd_data,1,0);
    VL_OUT8(all_done,0,0);
    CData/*0:0*/ testbench_fallos__DOT__mem_write_enable;
    CData/*0:0*/ testbench_fallos__DOT__done_read1;
    CData/*0:0*/ testbench_fallos__DOT__write_enable1;
    CData/*1:0*/ testbench_fallos__DOT__error_type1;
    CData/*0:0*/ testbench_fallos__DOT__done_read0;
    CData/*0:0*/ testbench_fallos__DOT__write_enable0;
    CData/*1:0*/ testbench_fallos__DOT__error_type0;
    CData/*2:0*/ testbench_fallos__DOT__current_state;
    CData/*2:0*/ testbench_fallos__DOT__next_state;
    CData/*0:0*/ testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__fi;
    CData/*0:0*/ testbench_fallos__DOT__unnamedblk5__DOT__unnamedblk2_5__DOT__unnamedblk6__DOT__pi;
    CData/*1:0*/ testbench_fallos__DOT__barrido_1s__DOT__current_state;
    CData/*1:0*/ testbench_fallos__DOT__barrido_1s__DOT__next_state;
    CData/*1:0*/ testbench_fallos__DOT__barrido_0s__DOT__current_state;
    CData/*1:0*/ testbench_fallos__DOT__barrido_0s__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ testbench_fallos__DOT__unnamedblk3__DOT__keep_mask;
    SData/*15:0*/ testbench_fallos__DOT__unnamedblk3__DOT__forced1;
    IData/*19:0*/ testbench_fallos__DOT__mem_addr;
    IData/*19:0*/ testbench_fallos__DOT__barrido_1s__DOT__addr_counter;
    IData/*19:0*/ testbench_fallos__DOT__barrido_0s__DOT__addr_counter;
    IData/*31:0*/ __VactIterCount;
    VL_OUT8(flipping_bit[1048576],0,0);
    VL_OUT8(patching_bit[1048576],0,0);
    VlUnpacked<SData/*15:0*/, 1048576> testbench_fallos__DOT__memory;
    VlUnpacked<SData/*15:0*/, 1048576> testbench_fallos__DOT__stuck0_mask;
    VlUnpacked<SData/*15:0*/, 1048576> testbench_fallos__DOT__stuck1_mask;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 1048576>, false, CData/*0:0*/, 1> __VdlyCommitQueue__patching_bit__v0;
    VlNBACommitQueue<VlUnpacked<CData/*0:0*/, 1048576>, false, CData/*0:0*/, 1> __VdlyCommitQueue__flipping_bit__v0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench_fallos__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench_fallos___024root(Vtestbench_fallos__Syms* symsp, const char* v__name);
    ~Vtestbench_fallos___024root();
    VL_UNCOPYABLE(Vtestbench_fallos___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
