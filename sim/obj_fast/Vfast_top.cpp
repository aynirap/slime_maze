// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfast_top__pch.h"

//============================================================
// Constructors

Vfast_top::Vfast_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : Vfast_top{_vcontextp__, _vcname__, true} {}

Vfast_top::Vfast_top(VerilatedContext* _vcontextp__, const char* _vcname__, bool _vcisRoot__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfast_top__Syms(contextp(), this, _vcname__, _vcisRoot__)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , clk{vlSymsp->vlInst.TOP.__VprimaryPorts.clk}
    , rst{vlSymsp->vlInst.TOP.__VprimaryPorts.rst}
    , tick{vlSymsp->vlInst.TOP.__VprimaryPorts.tick}
    , tick2{vlSymsp->vlInst.TOP.__VprimaryPorts.tick2}
    , btn{vlSymsp->vlInst.TOP.__VprimaryPorts.btn}
    , x{vlSymsp->vlInst.TOP.__VprimaryPorts.x}
    , y{vlSymsp->vlInst.TOP.__VprimaryPorts.y}
    , rgb{vlSymsp->vlInst.TOP.__VprimaryPorts.rgb}
    , state{vlSymsp->vlInst.TOP.__VprimaryPorts.state}
    , form{vlSymsp->vlInst.TOP.__VprimaryPorts.form}
    , lives{vlSymsp->vlInst.TOP.__VprimaryPorts.lives}
    , score{vlSymsp->vlInst.TOP.__VprimaryPorts.score}
    , ksec{vlSymsp->vlInst.TOP.__VprimaryPorts.ksec}
    , rootp{&(vlSymsp->vlInst.TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfast_top::Vfast_top(const char* _vcname__)
    : Vfast_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfast_top::~Vfast_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfast_top___024root___eval_debug_assertions(Vfast_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vfast_top___024root___eval_static(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_initial(Vfast_top___024root* vlSelf);
VL_ATTR_COLD bool Vfast_top___024root___eval_stl(Vfast_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
void Vfast_top___024root___eval_sample(Vfast_top___024root* vlSelf);
bool Vfast_top___024root___eval_ico(Vfast_top___024root* vlSelf, ::CData/*0:0*/ firstIteration);
bool Vfast_top___024root___eval_act(Vfast_top___024root* vlSelf);
bool Vfast_top___024root___eval_inact(Vfast_top___024root* vlSelf);
bool Vfast_top___024root___eval_nba(Vfast_top___024root* vlSelf);
bool Vfast_top___024root___eval_obs(Vfast_top___024root* vlSelf);
bool Vfast_top___024root___eval_react(Vfast_top___024root* vlSelf);
void Vfast_top___024root___eval_postponed(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_final(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__stl(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__ico(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__act(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__nba(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__obs(Vfast_top___024root* vlSelf);
VL_ATTR_COLD void Vfast_top___024root___eval_dump_triggers__react(Vfast_top___024root* vlSelf);

void Vfast_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfast_top::eval_step\n"); );
    m_evalLoop.eval();
}

void Vfast_top::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vfast_top___024root___eval_debug_assertions(&(vlSymsp->vlInst.TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vfast_top::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vfast_top::evalStatic() {
    Vfast_top___024root___eval_static(&(vlSymsp->vlInst.TOP));
}

void Vfast_top::evalInitial() {
    Vfast_top___024root___eval_initial(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalStl(bool firstIteration) {
    return Vfast_top___024root___eval_stl(&(vlSymsp->vlInst.TOP), firstIteration);
}

void Vfast_top::evalSample() {
    Vfast_top___024root___eval_sample(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalIco(bool firstIteration) {
    return Vfast_top___024root___eval_ico(&(vlSymsp->vlInst.TOP), firstIteration);
}

bool Vfast_top::evalAct() {
    return Vfast_top___024root___eval_act(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalInact() {
    return Vfast_top___024root___eval_inact(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalNba() {
    return Vfast_top___024root___eval_nba(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalObs() {
    return Vfast_top___024root___eval_obs(&(vlSymsp->vlInst.TOP));
}

bool Vfast_top::evalReact() {
    return Vfast_top___024root___eval_react(&(vlSymsp->vlInst.TOP));
}

void Vfast_top::evalPostponed() {
    Vfast_top___024root___eval_postponed(&(vlSymsp->vlInst.TOP));
}

void Vfast_top::evalFinal() {
    Vfast_top___024root___eval_final(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersStl() {
    Vfast_top___024root___eval_dump_triggers__stl(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersIco() {
    Vfast_top___024root___eval_dump_triggers__ico(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersAct() {
    Vfast_top___024root___eval_dump_triggers__act(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersNba() {
    Vfast_top___024root___eval_dump_triggers__nba(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersObs() {
    Vfast_top___024root___eval_dump_triggers__obs(&(vlSymsp->vlInst.TOP));
}

VL_ATTR_COLD void Vfast_top::dumpTriggersReact() {
    Vfast_top___024root___eval_dump_triggers__react(&(vlSymsp->vlInst.TOP));
}

//============================================================
// Events and timing
bool Vfast_top::eventsPending() { return false; }

uint64_t Vfast_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfast_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vfast_top::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfast_top::hierName() const { return vlSymsp->name(); }
const char* Vfast_top::modelName() const { return "Vfast_top"; }
unsigned Vfast_top::threads() const { return 1; }
void Vfast_top::prepareClone() const { contextp()->prepareClone(); }
void Vfast_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
