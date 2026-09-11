/*
 * main.c
 */

#include "APP_Potentiometer_LEDs.h"

int main(void)
{
    APP_PotentiometerLEDs_Init();

    while (1)
    {
        APP_PotentiometerLEDs_Task();
    }
    
    return 0;
}