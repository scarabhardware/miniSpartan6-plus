`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:42:16 04/26/2014
// Design Name:   top
// Module Name:   /home/hardwarer/Hello1/top_tb.v
// Project Name:  Hello1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module top_tb;

	// Inputs
	reg pixclk;

	// Outputs
	wire [2:0] TMDSp;
	wire [2:0] TMDSn;
	wire TMDSp_clock;
	wire TMDSn_clock;
	wire [7:0] LED;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.pixclk(pixclk), 
		.TMDSp(TMDSp), 
		.TMDSn(TMDSn), 
		.TMDSp_clock(TMDSp_clock), 
		.TMDSn_clock(TMDSn_clock), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		pixclk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever #20 pixclk = ~pixclk; 
	end
	
      
endmodule

