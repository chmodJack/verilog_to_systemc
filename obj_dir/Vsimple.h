// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _Vsimple_H_
#define _Vsimple_H_

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
class Vsimple__Syms;

//----------

SC_MODULE(Vsimple) 
{
public:
	// CELLS
	// Public to allow access to /*verilator_public*/ items;
	// otherwise the application code can consider these internals.

	// PORTS
	// The application code writes and reads these signals to
	// propagate new values into/out from the Verilated model.
	sc_in<uint32_t>	A;
	sc_out<uint32_t>	B;

	// LOCAL SIGNALS
	// Internals; generally not touched by application code

	// LOCAL VARIABLES
	// Internals; generally not touched by application code
	VL_SIG8(__Vcellinp__v__A,3,0);
	//char	__VpadToAlign17[3];

	// INTERNAL VARIABLES
	// Internals; generally not touched by application code
	Vsimple__Syms*	__VlSymsp;		// Symbol table

	// PARAMETERS
	// Parameters marked /*verilator public*/ for use by application code

	// CONSTRUCTORS
private:
	Vsimple& operator= (const Vsimple&);	///< Copying not allowed
	Vsimple(const Vsimple&);	///< Copying not allowed
public:
	SC_CTOR(Vsimple);
	virtual ~Vsimple();

	// USER METHODS

	// API METHODS
private:
	void eval();
public:
	void final();

	// INTERNAL METHODS
private:
	static void _eval_initial_loop(Vsimple__Syms* __restrict vlSymsp);
public:
	void __Vconfigure(Vsimple__Syms* symsp, bool first);
private:
	static QData	_change_request(Vsimple__Syms* __restrict vlSymsp);
public:
	static void	_combo__TOP__1(Vsimple__Syms* __restrict vlSymsp);
	static void	_combo__TOP__3(Vsimple__Syms* __restrict vlSymsp);
	static void	_eval(Vsimple__Syms* __restrict vlSymsp);
	static void	_eval_initial(Vsimple__Syms* __restrict vlSymsp);
	static void	_eval_settle(Vsimple__Syms* __restrict vlSymsp);
	static void	_settle__TOP__2(Vsimple__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
