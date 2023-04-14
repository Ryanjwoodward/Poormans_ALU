#include <stdio.h>
#include <string.h>
#include "alu_module/alu_module.h"


//----------------------------------
//      FIELDS
//----------------------------------
int first_operand, second_operand;  // These variables will hold the user's entered values
                                    // and be passed to the functions that write to hardware

//----------------------------------
//      FUNCTIONS
//----------------------------------

/**
 * Main Function - Application Entry Point
 * Each Function required to run the Poorman's ALU Appliction is called here.
 *
 * @return Exit Code 0
 */
int main() {

    printGreeting();         //Inform the User the Application has started with a prompt to the terminal


    startHardware();    //This call has the ALU make a function call to the hardware_module to allocate/ map resources


    first_operand = readUserInput();    //This calls the function to prompt the user to enter a value, returns the entered value
    errorCheck(first_operand, 0, 15);    //Function call to check the passed variable is acceptable according to the passed criteria


    second_operand = readUserInput();  //This calls the function to prompt the user to enter a value, returns the entered value
    errorCheck(second_operand, 0, 15);  //Function call to check the passed variable is acceptable according to the passed criteria

    prepareGPIORegister();
    writeToHardware(first_operand, second_operand);    //Function call to write the user's inputted values to the hardware


    closeHardware();

    printf("\nEnd of Program...Auf Wiedersehen!\n");
    return (0);
}