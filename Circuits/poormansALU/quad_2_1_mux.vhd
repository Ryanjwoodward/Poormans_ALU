LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY quad_2_1_mux IS
    PORT ( 
		enb	: IN STD_LOGIC;
		sel	: IN STD_LOGIC;
		x  : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		y  : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		f  : OUT STD_LOGIC_VECTOR(3 DOWNTO 0)
	 );
END quad_2_1_mux;

ARCHITECTURE data_flow OF quad_2_1_mux IS
	BEGIN
		f(0)  <=  (x(0) AND NOT enb AND NOT sel) OR (y(0) AND NOT enb AND sel);
		f(1)  <=  (x(1) AND NOT enb AND NOT sel) OR (y(1) AND NOT enb AND sel);
		f(2)  <=  (x(2) AND NOT enb AND NOT sel) OR (y(2) AND NOT enb AND sel);
		f(3)  <=  (x(3) AND NOT enb AND NOT sel) OR (y(3) AND NOT enb AND sel);

END data_flow;