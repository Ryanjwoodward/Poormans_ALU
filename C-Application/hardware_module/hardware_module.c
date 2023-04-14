/**-----------------------------------------------------------
    Author      | Ryan Woodward
    Institution | Grand Canyon University
    Class       | Embedded Systems 2
    Professor   | Prof. Mark Reha
    Date        | 02-09-2023
    File        | hardware_module.c
    Version     | 1.0
    Desription  | This file contains definitions and fields
                | used to interact with the peripherals
                | on the board
 -----------------------------------------------------------*/

#include "register_module.h"

#include "dependencies/address_map_arm.h"
#include "dependencies/terasic_os_includes.h"
#include "dependencies/terasic_lib.h"

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/mman.h>
#include "hwlib.h"
#include "socal/socal.h"
#include "socal/hps.h"
#include "socal/alt_gpio.h"


//----------------------------------
//      FIELDS
//----------------------------------
PARALLEL_PORT_DR* jp1_port;     // Pointer to GPIO Port Data Register
PARALLEL_PORT_DIR* dir_port;    // Pointer to GPIO Port Direction Register
void *virtBase;
int f_d;



//----------------------------------
//      FUNCTION PROTOTYPES
//----------------------------------
int openResources(void *virtualBase, int fd);
int closeResources(void *virtualBase, int fd);
void setupParallelPort(void *virtualBase, int fd);
void writeToParallelPort(int first_4b_operand, int second_4b_operand);

//----------------------------------
//      FUNCTIONS
//----------------------------------

/**
 * Function to Open and Map resources for FPGA Devices (LW Bridge)
 * @param virtualBase
 * @param fd
 * @return  error code (-1)
 */
int openResources(void *virtualBase, int fd){

    if((f_d = open("/dev/mem", (O_RDWR | O_SYNC))) == -1){
        printf("ERROR: Could not Open...");
        return (-1);
    }

    virtBase = mmap(NULL, LW_BRIDGE_SPAN, (PROT_READ | PROT_WRITE), MAP_SHARED, f_d, LW_BRIDGE_BASE);
    if(virtBase == MAP_FAILED){
        printf("ERROR: mmap() failed...");
        close(f_d);
        return (NULL);
    }
}

/**
 * Function to deallocate and close the mappings for FPGA devices
 * @param virtualBase
 * @param fd
 * @return error code (-1)
 */
int closeResources(void *virtualBase, int fd){

    if(munmap (virtBase, LW_BRIDGE_SPAN) != 0){
        printf("ERROR: munmap failed...");
        return(-1);
    }
    close(f_d);
    return 0;
}


/**
 * Function to assign the Base address of the JP1 Port to the Parallel Port Variable
 * @param virtualBase
 * @param fd
 */
void setupParallelPort(void *virtualBase, int fd){

    jp1_port = (unsigned int *)(virtBase + JP1_BASE);
    //*(jp1_port +1)  = 0x000F;

    dir_port = (unsigned  int *)(jp1_port +1);
    dir_port ->data_register_operand_1 = 0x000F;
    dir_port ->data_register_operand_2 = 0x000F;
    dir_port ->data_register_unused = 0;
}

/**
 * Function to write the passed values to the bits of the Parallel Port
 * @param first_4b_operand
 * @param second_4b_operand
 */
void writeToParallelPort(int first_4b_operand, int second_4b_operand){

    jp1_port->data_register_operand_1 = first_4b_operand;
    jp1_port->data_register_operand_2 = second_4b_operand;
    printf("\nWrite to Parallel Port %d and %d\n", first_4b_operand, second_4b_operand);
    printf("READ Parallel Ports: First: %d and Second: %d", jp1_port->data_register_operand_1, jp1_port->data_register_operand_2);
}

