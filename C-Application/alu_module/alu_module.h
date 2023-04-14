/**-----------------------------------------------------------
    Author      | Ryan Woodward
    Institution | Grand Canyon University
    Class       | Embedded Systems 2
    Professor   | Prof. Mark Reha
    Date        | 02-09-2023
    File        | alu_module.h
    Version     | 1.0
    Desription  | This file contains definitions for those
                | assets that must be externally available
                | from the alu_module
 -----------------------------------------------------------*/

#ifndef POORMANS_ALU_ALU_MODULE_H
#define POORMANS_ALU_ALU_MODULE_H

extern void printGreeting();
extern int readUserInput();
extern void startHardware();
extern void closeHardware();
extern void errorCheck(int userVariable, int lowerBound, int upperBound);
extern void prepareGPIORegister();

#endif //POORMANS_ALU_ALU_MODULE_H
