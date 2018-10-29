// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple.h for the primary calling header

#include "Vsimple.h"           // For This
#include "Vsimple__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_SC_CTOR_IMP(Vsimple)
#if (SYSTEMC_VERSION>20011000)
    : A("A"), B("B")
#endif
 {
    Vsimple__Syms* __restrict vlSymsp = __VlSymsp = new Vsimple__Syms(this, name());
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Sensitivities on all clocks and combo inputs
    SC_METHOD(eval);
    sensitive << A;
    
    // Reset internal values
    
    // Reset structure values
    __Vcellinp__v__A = VL_RAND_RESET_I(4);
}

void Vsimple::__Vconfigure(Vsimple__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vsimple::~Vsimple() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vsimple::eval() {
    Vsimple__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate Vsimple::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void Vsimple::_eval_initial_loop(Vsimple__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vsimple::_combo__TOP__1(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_combo__TOP__1\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_ISI(4,vlTOPp->__Vcellinp__v__A, vlTOPp->A);
}

void Vsimple::_settle__TOP__2(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_settle__TOP__2\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_ISI(4,vlTOPp->__Vcellinp__v__A, vlTOPp->A);
    VL_ASSIGN_SII(4,vlTOPp->B, ((8U & ((IData)(vlTOPp->__Vcellinp__v__A) 
				       << 3U)) | ((4U 
						   & (IData)(vlTOPp->__Vcellinp__v__A)) 
						  | ((2U 
						      & (IData)(vlTOPp->__Vcellinp__v__A)) 
						     | (1U 
							& ((IData)(vlTOPp->__Vcellinp__v__A) 
							   >> 3U))))));
}

VL_INLINE_OPT void Vsimple::_combo__TOP__3(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_combo__TOP__3\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_SII(4,vlTOPp->B, ((8U & ((IData)(vlTOPp->__Vcellinp__v__A) 
				       << 3U)) | ((4U 
						   & (IData)(vlTOPp->__Vcellinp__v__A)) 
						  | ((2U 
						      & (IData)(vlTOPp->__Vcellinp__v__A)) 
						     | (1U 
							& ((IData)(vlTOPp->__Vcellinp__v__A) 
							   >> 3U))))));
}

void Vsimple::_eval(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_eval\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Vsimple::_eval_initial(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_eval_initial\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimple::final() {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::final\n"); );
    // Variables
    Vsimple__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vsimple::_eval_settle(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_eval_settle\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData Vsimple::_change_request(Vsimple__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    Vsimple::_change_request\n"); );
    Vsimple* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
