/*
 * main.c
 *
 *  Author: Abdelrahman Elbokhary
 */

#include "APP_Voltmeter.h"

int main(void)
{
    APP_Voltmeter_Init();

    while (1)
    {
        APP_Voltmeter_Task();
    }
    
    return 0;
}