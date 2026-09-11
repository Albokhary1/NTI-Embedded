/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_MotorControl.h"

int main(void)
{
    APP_MotorControl_Init();

    while (1)
    {
        APP_MotorControl_Task();
    }
    
    return 0;
}