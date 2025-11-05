// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VFINAL_INTEGRATION_H_
#define VERILATED_VFINAL_INTEGRATION_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vfinal_integration__Syms;
class Vfinal_integration___024root;
class Vfinal_integration_final_integration;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vfinal_integration VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vfinal_integration__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&start_reading,0,0);
    VL_IN8(&start_scan,0,0);
    VL_OUT8(&scan_done,0,0);
    VL_OUT(&count_f,31,0);
    VL_OUT(&count_p,31,0);
    VL_IN16((&activation_org)[4],15,0);
    VL_IN16((&activation_cache)[4],15,0);
    VL_OUT8((&f)[64],0,0);
    VL_OUT8((&p)[64],0,0);
    VL_OUT16((&flipped_out)[4],15,0);
    VL_OUT16((&patched_out)[4],15,0);
    VL_OUT16((&activation_final)[4],15,0);
    VL_OUT8((&f_m)[4],0,0);
    VL_OUT8((&p_m)[4],0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vfinal_integration_final_integration* const final_integration;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vfinal_integration___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vfinal_integration(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vfinal_integration(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vfinal_integration();
  private:
    VL_UNCOPYABLE(Vfinal_integration);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
