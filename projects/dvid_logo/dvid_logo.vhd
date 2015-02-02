----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:13:30 01/03/2015 
-- Design Name: 
-- Module Name:    dvid_thru - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity dvid_logo is
    Port ( --clk50         : in  STD_LOGIC;
           hdmi_in_p     : in  STD_LOGIC_VECTOR(3 downto 0);
           hdmi_in_n     : in  STD_LOGIC_VECTOR(3 downto 0);
           hdmi_in_sclk  : inout  STD_LOGIC;
           hdmi_in_sdat  : inout  STD_LOGIC;

           hdmi_out_p : out  STD_LOGIC_VECTOR(3 downto 0);
           hdmi_out_n : out  STD_LOGIC_VECTOR(3 downto 0);
                      
           leds       : out std_logic_vector(7 downto 0));
end dvid_logo;

architecture Behavioral of dvid_logo is

	COMPONENT vga_gen
	PORT(
		clk50           : IN std_logic;          
		pixel_clock     : OUT std_logic;
		red_p           : OUT std_logic_vector(7 downto 0);
		green_p         : OUT std_logic_vector(7 downto 0);
		blue_p          : OUT std_logic_vector(7 downto 0);
		blank           : OUT std_logic;
		hsync           : OUT std_logic;
		vsync           : OUT std_logic
		);
	END COMPONENT;


	COMPONENT dvid_out
	PORT(
      clk_pixel  : IN std_logic;
		red_p      : IN std_logic_vector(7 downto 0);
		green_p    : IN std_logic_vector(7 downto 0);
		blue_p     : IN std_logic_vector(7 downto 0);
		blank      : IN std_logic;
		hsync      : IN std_logic;
		vsync      : IN std_logic;          
		tmds_out_p : OUT std_logic_vector(3 downto 0);
		tmds_out_n : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;

	COMPONENT logo
	PORT(
		clk_pixel : IN std_logic;
      --
		i_red     : IN std_logic_vector(7 downto 0);
		i_green   : IN std_logic_vector(7 downto 0);
		i_blue    : IN std_logic_vector(7 downto 0);
		i_blank   : IN std_logic;
		i_hsync   : IN std_logic;
		i_vsync   : IN std_logic;          
      --
		o_red     : OUT std_logic_vector(7 downto 0);
		o_green   : OUT std_logic_vector(7 downto 0);
		o_blue    : OUT std_logic_vector(7 downto 0);
		o_blank   : OUT std_logic;
		o_hsync   : OUT std_logic;
		o_vsync   : OUT std_logic        
		);
	END COMPONENT;


	COMPONENT dvid_in
	PORT(
      clk_pixel  : out std_logic;
      leds     : out std_logic_vector(7 downto 0) := (others => '0');
		red_p      : out std_logic_vector(7 downto 0);
		green_p    : out std_logic_vector(7 downto 0);
		blue_p     : out std_logic_vector(7 downto 0);
		blank      : out std_logic;
		hsync      : out std_logic;
		vsync      : out std_logic;          
		tmds_in_p  : in  std_logic_vector(3 downto 0);
		tmds_in_n  : in  std_logic_vector(3 downto 0)
		);
	END COMPONENT;


	signal clk_pixel : std_logic;

   
   signal i_red     : std_logic_vector(7 downto 0);
   signal i_green   : std_logic_vector(7 downto 0);
   signal i_blue    : std_logic_vector(7 downto 0);
	signal i_blank   : std_logic;
	signal i_hsync   : std_logic;
	signal i_vsync   : std_logic;          

   signal o_red     : std_logic_vector(7 downto 0);
   signal o_green   : std_logic_vector(7 downto 0);
   signal o_blue    : std_logic_vector(7 downto 0);
	signal o_blank   : std_logic;
	signal o_hsync   : std_logic;
	signal o_vsync   : std_logic;          
   
begin
   hdmi_in_sclk  <= 'Z';
   hdmi_in_sdat  <= 'Z';
   ----------------------------------
   -- EDID I2C signals (not implemented)
   ----------------------------------
--   hdmi_in_sclk  <= 'Z';
--   hdmi_in_sdat  <= 'Z';

---------------------------------------
-- Generate a 1280x720 VGA test pattern
---------------------------------------
--Inst_vga_gen: vga_gen PORT MAP(
--		clk50 => clk50,
--		pixel_clock     => pixel_clock,      
--		red_p           => red_p,
--		green_p         => green_p,
--		blue_p          => blue_p,
--		blank           => blank,
--		hsync           => hsync,
--		vsync           => vsync
--	);

---------------------------------------
-- Generate a 1280x720 VGA test pattern
---------------------------------------
Inst_dvid_in: dvid_in PORT MAP(
		tmds_in_p => hdmi_in_p,
		tmds_in_n => hdmi_in_n,

      leds => leds,
      
		clk_pixel => clk_pixel,
		red_p     => i_red,
		green_p   => i_green,
		blue_p    => i_blue,
		blank     => i_blank,
		hsync     => i_hsync,
		vsync     => i_vsync
	);

	Inst_logo: logo PORT MAP(
		clk_pixel => clk_pixel,
		i_red     => i_red,
      i_green   => i_green,
      i_blue    => i_blue,
		i_blank   => i_blank,
		i_hsync   => i_hsync,
		i_vsync   => i_vsync,
      --
		o_red     => o_red,
      o_green   => o_green,
      o_blue    => o_blue,
		o_blank   => o_blank,
		o_hsync   => o_hsync,
		o_vsync   => o_vsync
	);
   
---------------------------------------------------
-- Convert the VGA signals to the DVI-D/TMDS output 
---------------------------------------------------
Inst_dvid_out: dvid_out PORT MAP(
		clk_pixel  => clk_pixel,
     
		red_p      => o_red,
		green_p    => o_green,
		blue_p     => o_blue,
		blank      => o_blank,
		hsync      => o_hsync,
		vsync      => o_vsync,
     
		tmds_out_p => hdmi_out_p,
		tmds_out_n => hdmi_out_n
	);


end Behavioral;

