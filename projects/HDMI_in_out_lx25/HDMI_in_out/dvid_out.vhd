--------------------------------------------------------------------------------
-- Engineer:      Mike Field <hamster@snap.net.nz>
-- Description:   Converts VGA signals into DVID bitstreams.
--
--                data_load_clock is 2x pixel_clock (used to load the 5:1 serialisers)
--                ioclock is serialiser output clock
--
--                'blank' should be asserted during the non-display 
--                portions of the frame
--------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
Library UNISIM;
use UNISIM.vcomponents.all;

entity dvid_out is
    Port ( pixel_clock     : IN std_logic;
		     data_load_clock : IN std_logic;
		     ioclock         : IN std_logic;
           serdes_strobe   : IN std_logic;
           red_p     : in  STD_LOGIC_VECTOR (7 downto 0);
           green_p   : in  STD_LOGIC_VECTOR (7 downto 0);
           blue_p    : in  STD_LOGIC_VECTOR (7 downto 0);
           blank     : in  STD_LOGIC;
           hsync     : in  STD_LOGIC;
           vsync     : in  STD_LOGIC;
           red_s     : out STD_LOGIC;
           green_s   : out STD_LOGIC;
           blue_s    : out STD_LOGIC;
           clock_s   : out STD_LOGIC);
end dvid_out;

architecture Behavioral of dvid_out is
   COMPONENT TMDS_encoder
   PORT(
         clk     : IN  std_logic;
         data    : IN  std_logic_vector(7 downto 0);
         c       : IN  std_logic_vector(1 downto 0);
         blank   : IN  std_logic;          
         encoded : OUT std_logic_vector(9 downto 0)
      );
   END COMPONENT;

   COMPONENT tmds_out_fifo
   PORT (
         wr_clk     : IN  STD_LOGIC;
         rd_clk     : IN  STD_LOGIC;
         din        : IN  STD_LOGIC_VECTOR(29 DOWNTO 0);
         wr_en      : IN  STD_LOGIC;
         rd_en      : IN  STD_LOGIC;
         dout       : OUT STD_LOGIC_VECTOR(29 DOWNTO 0);
         full       : OUT STD_LOGIC;
         empty      : OUT STD_LOGIC;
         prog_empty : OUT STD_LOGIC
      );
   END COMPONENT;

	COMPONENT output_serialiser
	PORT(
		clk_load   : IN  std_logic;
		clk_output : IN  std_logic;
      strobe     : IN  std_logic;
		ser_data   : IN  std_logic_vector(4 downto 0);          
		ser_output : OUT std_logic
		);
	END COMPONENT;

   signal encoded_red, encoded_green, encoded_blue : std_logic_vector(9 downto 0);
   signal latched_red, latched_green, latched_blue : std_logic_vector(9 downto 0) := (others => '0');
   signal ser_in_red,  ser_in_green,  ser_in_blue, ser_in_clock   : std_logic_vector(4 downto 0) := (others => '0');
   signal fifo_in       : std_logic_vector(29 downto 0);
   signal fifo_out      : std_logic_vector(29 downto 0);
   signal rd_enable     : std_logic := '0';
   signal not_ready_yet : std_logic;
   
   constant c_red       : std_logic_vector(1 downto 0) := (others => '0');
   constant c_green     : std_logic_vector(1 downto 0) := (others => '0');
   signal   c_blue      : std_logic_vector(1 downto 0);

begin   
   -- Send the pixels to the encoder
   c_blue <= vsync & hsync;
   TMDS_encoder_red:   TMDS_encoder PORT MAP(clk => pixel_clock, data => red_p,   c => c_red,   blank => blank, encoded => encoded_red);
   TMDS_encoder_green: TMDS_encoder PORT MAP(clk => pixel_clock, data => green_p, c => c_green, blank => blank, encoded => encoded_green);
   TMDS_encoder_blue:  TMDS_encoder PORT MAP(clk => pixel_clock, data => blue_p,  c => c_blue,  blank => blank, encoded => encoded_blue);

   -- Then to a small FIFO
   fifo_in <= encoded_red & encoded_green & encoded_blue;
   
out_fifo: tmds_out_fifo
  PORT MAP (
    wr_clk => pixel_clock,
    din    => fifo_in,
    wr_en  => '1',
    full   => open,
    
    rd_clk     => data_load_clock,
    rd_en      => rd_enable,
    dout       => fifo_out,
    empty      => open,
    prog_empty => not_ready_yet
  );
   
   -- Now at a x2 clock, send the data from the fifo to the serialisers
process(data_load_clock)
   begin
      if rising_edge(data_load_clock) then
         if not_ready_yet = '0' then
            if rd_enable = '1' then
               ser_in_red   <= fifo_out(29 downto 25);
               ser_in_green <= fifo_out(19 downto 15);
               ser_in_blue  <= fifo_out( 9 downto  5);
               ser_in_clock <= "11111";
               rd_enable <= '0';
            else
               ser_in_red   <= fifo_out(24 downto 20);
               ser_in_green <= fifo_out(14 downto 10);
               ser_in_blue  <= fifo_out( 4 downto  0);
               ser_in_clock <= "00000";
               rd_enable <= '1';
            end if;
         end if;
      end if;
   end process;

output_serialiser_r: output_serialiser PORT MAP(clk_load => data_load_clock, clk_output => ioclock, strobe => serdes_strobe, ser_data => ser_in_red,   ser_output => red_s);
output_serialiser_g: output_serialiser PORT MAP(clk_load => data_load_clock, clk_output => ioclock, strobe => serdes_strobe, ser_data => ser_in_green, ser_output => green_s);
output_serialiser_b: output_serialiser PORT MAP(clk_load => data_load_clock, clk_output => ioclock, strobe => serdes_strobe, ser_data => ser_in_blue,  ser_output => blue_s);
output_serialiser_c: output_serialiser PORT MAP(clk_load => data_load_clock, clk_output => ioclock, strobe => serdes_strobe, ser_data => ser_in_clock, ser_output => clock_s);
   
end Behavioral;