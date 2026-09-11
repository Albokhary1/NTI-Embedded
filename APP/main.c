/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_TempAlarm.h"

int main(void)
{
    APP_TempAlarm_Init();

    while (1)
    {
        APP_TempAlarm_Task();
    }
    
    return 0;
}