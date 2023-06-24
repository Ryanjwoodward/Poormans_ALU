# Poormans_ALU
***
Poorman's Arithmetic Logic Unit (ALU) Embedded Systems Project
> This project is an embedded systems project that is essentially a simplfied Arithmetic Logic Unit (ALU). The project consists of a C application that runs in the DE10 Standards HPS and interacts with the FPGA via GPIO pins. The user enters input via a keyboard and slide switches on the board. Supported functions are addition, subtraction, and logical AND. The inputs are two 4-bit numbers. Included circuits are a Quad 2:1 MUX, 4-bit adder-subtractor, 4-bit AND, BCD to seven segment decoder, and the whole ALU circuit.

> For this Project I wrote each of the required circuits (based upon my design) in VHDL and Verilog. I leveraged each of the Architecture models, namely Data flow, Structural, and Behavioral. I learned in-line ARM assembly and included that in my C application. I leveraged IP cores from Intel's Quartus software. Aside extensive design including schematic capture, boolean expression, K-maps, and truth tables I performed extensive testing using waveform analysis to verify the function of my circuits and application.
***
### Technologies
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/4411e528-206b-4ac2-bd0e-266ff77cbbf0" width="75"/>
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/bcb39da6-1cc7-486e-80b0-a32cc0face32" width="90"/>
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/2a9d07e4-6629-414f-8a71-7a494f231312" width="90"/>
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/ad3afe01-2612-4314-9608-ed29122d643b" width="90"/>
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/1d02a86c-f6cc-4313-bf02-4d42a09a54d6" width="75"/>

>
  - C Programming Language
  - Arm Assebly (In-Line)
  - CLion
  - Arm Development Studio
  - VHDL
  - Verilog
  - DE10-Standard  (Cyclone 5 FGPA)
  - Linaro Linux
  - Quartus Software
***
### Documentation
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/28dca8be-1ff0-4885-b82d-2e216b70d98b" width="35"/>https://docs.google.com/document/d/1ZaKlRqTRnHX_WhcK3Or9eSnOeIX7HebnkndpHCdt8sQ/edit?usp=sharing

><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/9b1b3713-76c6-4f4e-bd28-394947f58255" width="200"/> 

***
### Circuits

### Four Bit Adder-Subtractor (ALU)
__Schematic Capture__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/aa905ba3-7379-47c6-a8a7-15e85c7e4fe9" width="400"/>

__Truth Table__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/28333d4a-626f-4f28-8b71-3bbfb488eed7" width="400"/>

__K-Maps__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/f69abc2f-0968-4f54-bae3-5a36d138de68" width="400"/>

__Boolean Expression__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/7afbd475-bc25-4fdf-9505-6b58de963fc1" width="400"/>

__VHDL Circuit__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/08a42f6f-0015-4f51-aa02-62dd4b7f522e" width="400"/>

### Boolean Logic Unit (AND)
__Schematic Capture__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/ca2c9ce1-2657-47af-8f8d-4ee42b95b7ae" width="400"/>

__Truth Table__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/15044ae8-e916-4b19-8b60-0bbbfd68f1ac" width="400"/>

__K-Maps__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/62865f2e-f75a-45dc-a7d0-e3e8ea16596a" width="400"/>

__Boolean Expression__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/3bf94e12-44f3-46cf-9c5a-06c6174aaa13" width="400"/>

__VHDL Circuit__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/48d3bdf2-55b6-4950-b40d-8cbb324191e8" width="400"/>


### Quad 2:1 Multiplexer
__Schematic Capture__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/7db29061-5086-4d86-866b-b1c8580d679c" width="400"/>

__Truth Table__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/cc4141ff-6487-4f19-a028-f8e48c4e032c" width="400"/>

__K-Maps__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/33db9748-74c6-49f7-91f5-911aa3e3e11d" width="400"/>

__Boolean Expression__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/56fb7192-231c-4492-afc3-4659e95ddcb9" width="400"/>

__VHDL Circuit__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/d6a2593b-a619-47cf-a896-e7405938182f" width="400"/>

### Poormans ALU Circuit
__Truth Table__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/b5622b02-7928-43b7-a30d-f7efb26d5c29" width="500"/>

__VHDL Circuit__
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/f71b609d-9194-4d3f-be00-063f2fccc415" width="500"/>


### Circuits Not Shown:
  - BCD to Seven Segment Decoder
  - Verilog Versions of the above Circuits
  - Other Architecture Styles of Circuits (Behavioral, Dataflow, Structural)

***
### Screenshots

#### System Design
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/e30d0c7f-c11c-4ff0-9530-29350e97d2ad" width="500"/>

#### Application Design
><img src="https://github.com/Ryanjwoodward/Poormans_ALU/assets/48807137/8834c7c9-06fa-4500-b732-ab2330025986" width="500"/>

***
### Demonstrations

 ><img src="https://user-images.githubusercontent.com/48807137/235379450-240b387a-f405-42e9-8062-93f3e08faf60.png" width="25"/> __Full Demo:__ https://youtu.be/qGbF3a6-ZJk

><img src="https://user-images.githubusercontent.com/48807137/235379450-240b387a-f405-42e9-8062-93f3e08faf60.png" width="25"/> __Project Presentation:__ https://youtu.be/rl7aGIHYdLI

><img src="https://user-images.githubusercontent.com/48807137/235379450-240b387a-f405-42e9-8062-93f3e08faf60.png" width="25"/> __Brief Demo:__ https://youtu.be/80nXXKe2rMk
