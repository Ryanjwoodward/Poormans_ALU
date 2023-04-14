/**-----------------------------------------------------------
    Author      | Ryan Woodward
    Institution | Grand Canyon University
    Class       | Embedded Systems 2
    Professor   | Prof. Mark Reha
    Date        | 02-09-2023
    File        | register_module.h
    Version     | 1.0
    Desription  | This file contains definitions for registers
                | to the hardware of the Board
 -----------------------------------------------------------*/

#ifndef POORMANS_ALU_REGISTER_MODULE_H
#define POORMANS_ALU_REGISTER_MODULE_H

/**
 * This PARALLEL_PORT register corresponds to the Parallel ports
 * on the FPGA. See Section 2.10 & 2.10.5 of the Documentation
 * Base Address 0xFF200060, JP1_PTR in arm_address.h
 */
typedef struct{
    unsigned int data_register_operand_1 : 4;
    unsigned int data_register_operand_2 : 4;
    unsigned int data_register_unused : 24;
}PARALLEL_PORT_DR;

typedef struct{
    unsigned int data_register_operand_1 : 4;
    unsigned int data_register_operand_2 : 4;
    unsigned int data_register_unused : 24;
}PARALLEL_PORT_DIR;

// Create two additonal 32 bit Structs
// initialize both pointers
//edit the dire input/ouput #defines
// remove second struct and create two instances of the previous

#endif //POORMANS_ALU_REGISTER_MODULE_H
