/**-----------------------------------------------------------
    Author      | Ryan Woodward
    Institution | Grand Canyon University
    Class       | Embedded Systems 2
    Professor   | Prof. Mark Reha
    Date        | 02-09-2023
    File        | hardware_module.h
    Version     | 1.0
    Desription  | This file contains definitions for those
                | assets that must be externally available
                | from te hardware module
 -----------------------------------------------------------*/

#ifndef POORMANS_ALU_HARDWARE_MODULE_H
#define POORMANS_ALU_HARDWARE_MODULE_H

extern int openResources(void *virtualBase, int fd);
extern int closeResources(void *virtualBase, int fd);
extern void setupParallelPort(void *virtualBase, int fd);
extern void writeToParallelPort(int first_4b_operand, int second_4b_operand);

#endif //POORMANS_ALU_HARDWARE_MODULE_H
