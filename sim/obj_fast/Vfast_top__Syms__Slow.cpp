// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vfast_top__pch.h"


void Vfast_top__Syms__ctor(Vfast_top__Syms* vlSymsp, const char* namep) {
    // Setup top module instance
    VL_INPLACE_CONSTRUCT(vlSymsp->vlInst.TOP, vlSymsp, namep);
    // Check resources
    Verilated::stackCheck(200);
    // Setup names of the model and of its top module instances
    vlSymsp->__Vm_topNames[0] = vlSymsp->name();
    vlSymsp->__Vm_topNames[1] = vlSymsp->__Vm_isRoot ? Verilated::catName(vlSymsp->name(), "fast_top") : vlSymsp->name();
    // Setup sub module instances
    // Configure time unit / time precision
    vlSymsp->_vm_contextp__->timeunit(-9);
    vlSymsp->_vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
}

Vfast_top__Syms::Vfast_top__Syms(VerilatedContext* contextp, Vfast_top* modelp, const char* namep, bool isRoot)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    , __Vm_isRoot{isRoot}
    , __Vm_didInit{modelp->m_didInit}
{
    Vfast_top__Syms__ctor(this, namep);
}

void Vfast_top__Syms__dtor(Vfast_top__Syms* vlSymsp) {
    // Tear down scopes
    // Tear down sub module instances
    // Tear down top module instance
    VL_INPLACE_DESTRUCT(vlSymsp->vlInst.TOP);
}

Vfast_top__Syms::~Vfast_top__Syms() {
    Vfast_top__Syms__dtor(this);
}
