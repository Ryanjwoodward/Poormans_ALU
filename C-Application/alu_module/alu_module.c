/**-----------------------------------------------------------
    Author      | Ryan Woodward
    Institution | Grand Canyon University
    Class       | Embedded Systems 2
    Professor   | Prof. Mark Reha
    Date        | 02-09-2023
    File        | alu_module.c
    Version     | 1.0
    Desription  | This file contains definitions of fields and
                | functions for the ALU module of the project
 -----------------------------------------------------------*/

#include <stdio.h>
#include <string.h>
#include "../hardware_module/hardware_module.h"

//----------------------------------
//      FIELDS
//----------------------------------
void *virtual_base;
int fd;


//----------------------------------
//      FUNCTION PROTOTYPES
//----------------------------------
void printGreeting();
int readUserInput();
void startHardware();
void closeHardware();
void errorCheck(int userVariable, int lowerBound, int upperBound);


//----------------------------------
//      FUNCTIONS
//----------------------------------

/**
 * Basic Function That prints out a greeting to the terminal
 */
void printGreeting(){

    printf("    ---------------------------------------------\n\t  Welcome to the Poorman's ALU  \n    ---------------------------------------------\n");
}

/**
 * Function that is called to setup hardware for the ALU module
 * the call to hardware is given a variable to the variables used for
 * the ALU's hardware mappings
 */
void startHardware(){

    openResources(virtual_base, fd);
}

/**
 * Function that is called to conclude and deallocate the
 * resources and amppings used for the ALU application
 */
void closeHardware(){

    closeResources(virtual_base, fd);
}

/**
 * Function that is called to read in user input as a single number
 * @return inputted value (userVariable)
 */
int readUserInput(){

    int userVariable = 0;
    printf("\t Enter a 4-bit Value (15 or Less): ");
    scanf("%d",&userVariable);
    return userVariable;
}


/**
 * Function that is used to verify their values pass their criteria
 * of upper and lowerbounds
 * @param userVariable
 * @param lowerBound
 * @param upperBound
 */
void errorCheck(int userVariable, int lowerBound, int upperBound){

    if(userVariable > upperBound){
        userVariable = 15;
    }else if(userVariable < lowerBound){
        userVariable = 0;
    }
}

/**
 * This function is used to setup the addresses for the JP1 port of the GPIO
 * pins and make set the direction register to output
 */
void prepareGPIORegister(){
    setupParallelPort(virtual_base, fd);
}

/**
 * This function is used to write, the values passed, to the hardware functions
 * @param first_4b_operand
 * @param second_4b_operand
 */
void writeToHardware(int first_4b_operand, int second_4b_operand){
    writeToParallelPort(first_4b_operand, second_4b_operand);
}



