----------------------------------------------------------------------------------
-- Engineer: Mike Field <hamster@snap.net.nz<
-- 
-- Description: Generate clocking for sending TMDS data use the OSERDES2
-- 
-- WHEN SENDING SOMETHING OTHER THAN 5 BITS AT a timeCHANGE 'DIVIDE' 
--
-- REMEMBER TO CHECK CLKIN_PERIOD ON PLL_BASE
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VComponents.all;

entity clocking is
    Port ( clk50m          : in  STD_LOGIC;
           pixel_clock     : out STD_LOGIC;  -- Global, The pixel clock.
           data_load_clock : out STD_LOGIC;  -- Global, At Pixel_clock x2, for when each 5 bits of TDMS data is loaded into the serialiser
           ioclock         : out STD_LOGIC;  -- In an I/O Bank, the x10 clock, for when bits are sent out of the serialiser
           serdes_strobe   : out STD_LOGIC); -- An 'enable load' signal, withing the ioclock domain, for when the serialiser loads data
end clocking;

architecture Behavioral of clocking is
   signal clock_x1             : std_logic;
   signal clock_x2             : std_logic;
   signal clock_x10            : std_logic;
   signal clock_x10_unbuffered : std_logic;
   signal clock_x2_unbuffered  : std_logic;
   signal clock_x1_unbuffered  : std_logic;
   signal clk_feedback         : std_logic;
   signal clk50m_buffered      : std_logic;
   signal pll_locked           : std_logic;
begin
   pixel_clock     <= clock_x1;
   data_load_clock <= clock_x2;
   
   -- Multiply clk50m by 10, then :
   -- * divide by 1 for the bit clock (pixel clock x10)
   -- * divide by 5 for the pixel clock x2 
   -- * divide by 10 for the pixel clock
   -- Because the all come from the same PLL the will all be in phase 
   PLL_BASE_inst : PLL_BASE
   generic map (
      CLKFBOUT_MULT => 15,                  
      CLKOUT0_DIVIDE => 1,       CLKOUT0_PHASE => 0.0,   -- Output 10x original frequency
      CLKOUT1_DIVIDE => 5,       CLKOUT1_PHASE => 0.0,   -- Output 2x original frequency
      CLKOUT2_DIVIDE => 10,      CLKOUT2_PHASE => 0.0,   -- Output 1x original frequency
      CLK_FEEDBACK => "CLKFBOUT",                        -- Clock source to drive CLKFBIN ("CLKFBOUT" or "CLKOUT0")
      CLKIN_PERIOD => 20.0,                              -- IMPORTANT! 20.00 => 50MHz
      DIVCLK_DIVIDE => 1                                 -- Division value for all output clocks (1-52)
   )
      port map (
      CLKFBOUT => clk_feedback, 
      CLKOUT0  => clock_x10_unbuffered,
      CLKOUT1  => clock_x2_unbuffered,
      CLKOUT2  => clock_x1_unbuffered,
      CLKOUT3  => open,
      CLKOUT4  => open,
      CLKOUT5  => open,
      LOCKED   => pll_locked,      
      CLKFBIN  => clk_feedback,    
      CLKIN    => clk50m_buffered, 
      RST      => '0'              -- 1-bit input: Reset input
   );

   BUFG_clk       : BUFG port map ( I => clk50m,               O => clk50m_buffered);
   BUFG_pclockx2  : BUFG port map ( I => clock_x2_unbuffered,  O => clock_x2);
   BUFG_pclock    : BUFG port map ( I => clock_x1_unbuffered,  O => clock_x1);
   BUFG_pclockx10 : BUFG port map ( I => clock_x10_unbuffered, O => clock_x10 );

  
  BUFPLL_inst : BUFPLL
   generic map (
      DIVIDE => 5,         -- DIVCLK divider (1-8) !!!! IMPORTANT TO CHANGE THIS AS NEEDED !!!!
      ENABLE_SYNC => TRUE  -- Enable synchrnonization between PLL and GCLK (TRUE/FALSE) -- should be true
   )
   port map (
      IOCLK        => ioclock,               -- Clock used to send bits
      LOCK         => open,                 
      SERDESSTROBE => serdes_strobe,         -- Clock use to load data into SERDES 
      GCLK         => clock_x2,              -- Global clock use as a reference for serdes_strobe
      LOCKED       => pll_locked,            -- When the upstream PLL is locked 
      PLLIN        => clock_x10_unbuffered   -- Whate clock to use - this must be unbuffered
   );
end Behavioral;