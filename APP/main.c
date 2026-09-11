/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_DIP_Interrupt.h"

int main(void)
{
    APP_DIP_Interrupt_Init();

    while (1)
    {
        /* The main loop is empty. The microcontroller waits for the interrupts to trigger the ISRs. */
    }
    
    return 0;
}