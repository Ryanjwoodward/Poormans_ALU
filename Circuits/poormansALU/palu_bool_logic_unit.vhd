LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY palu_bool_logic_unit IS
	PORT(
		u : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		w : IN STD_LOGIC_VECTOR(3 DOWNTO 0);
		e : OUT STD_LOGIC_VECTOR(3 DOWNTO 0)
	);
	
END palu_bool_logic_unit;

ARCHITECTURE dataflow OF palu_bool_logic_unit IS

		BEGIN
			e <= u AND w;
		
END dataflow;		