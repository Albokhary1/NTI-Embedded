/*
 * main.c
 */

#include "APP_MotorDirControl.h"

int main(void)
{
    APP_MotorDirControl_Init();

    while (1)
    {
        APP_MotorDirControl_Task();
    }
    
    return 0;
}