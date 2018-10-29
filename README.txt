run original verilog code:
	$ iverilog simple.v simple_tb.v -o simple
	$ ./simple

convert to systemc:
	$ verilator --sc simple.v
