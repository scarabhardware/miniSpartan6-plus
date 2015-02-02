`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:  N/A
// Engineer: nerf_ninja
// 
// Create Date:    09:51:02 01/31/2015 
// Design Name: 
// Module Name:    aud_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 	Simple audio tone generator
//              			for Scarab MiniSpartan6+ board.
//////////////////////////////////////////////////////////////////////////////////
module aud_top (
	input	wire		clk50_i,	// 50M clock
	output wire			audio_l_o,	// audio out left
	output wire 		audio_r_o	// audio out right
);

wire clk50;
reg [31:0]  count, sec_count;
reg[2:0] 	addr;
reg[23:0] 	note;
reg			sec_strobe;
reg			audio; // mono balance output

//BUFG clk50_bufg (.I(clk50_i), .O(clk50));
assign clk50 = clk50_i;

// Simple reset which works when we don't have a discrete reset to the chip.
// Normally this is bad practice to use initial statements in synthesizable
// code. 
initial begin
	count 		<= 0;
	sec_count	<= 0;
	audio		<= 0;
	addr		<= 0;
	note		<= 0;
end


always @(posedge clk50) begin
	// Seconds timer. Used to advance the note. 
	if (sec_count < 32'd20000000) sec_count <= sec_count + 1;
	else sec_count <= 32'd1;
	sec_strobe <= (sec_count == 32'd1) ? 1'b1 : 1'b0;
	
	// Addr rolls over every 8 sec. Addr selects
	// the divisor which we use to generate a tone.
	if (sec_strobe) addr <= addr + 1;
	
	// Tone generator. Count half a period of note,
	// then invert the audio signal. This makes a 50/50
	// square wave. 
	if (count < note/2) count <= count + 1;
	else count <= 1;
	
	if (count == 1) audio <= ~audio;
end

/*
	Drive both outputs from the one audio waveform
*/	

assign audio_l_o = audio;
assign audio_r_o = audio;

/*
	Lazy song programming. Use a simple ROM style decode.

	Musical scale:
	
	Middle C is 261.63 Hz
	Note	Hz		clocks
	C		261.63	191110
	D		293.66	170265
	E		329.63	151685
	F		349.23	143172
	G		392		127551
	A		440		113636
	B		493.88	101239
	C		523.25	95557
	
*/
always @(addr) begin
	case (addr) // fully specifying all possibilities
	0:	note <= 191110;
	1:	note <= 170265;
	2:	note <= 151685;
	3:	note <= 143172;
	4:	note <= 127551;
	5:	note <= 113636;
	6:	note <= 101239;
	7:	note <=  95557;
	default: note <= 191110; // redundant but good practice
	endcase
end

endmodule
