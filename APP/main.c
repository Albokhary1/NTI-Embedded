/*
 * main_Master.c
 */

#include "APP_SPI_Master.h"

int main(void)
{
    APP_SPI_Master_Init();

    while (1)
    {
        APP_SPI_Master_Task();
    }
    
    return 0;
}