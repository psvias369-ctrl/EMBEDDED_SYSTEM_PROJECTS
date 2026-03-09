#include "adc.h"

/* Initialize ADC1 for internal temperature sensor */
void ADC1_Init()
{
    RCC->APB2ENR |= (1<<8);   // Enable ADC1 clock

    ADC->CCR |= (1<<23);      // Enable temperature sensor

    ADC1->SMPR1 |= (7<<18);   // Sampling time for channel 16

    ADC1->SQR3 = 16;          // First conversion channel 16

    ADC1->CR2 |= (1<<0);      // Enable ADC
}

/* Read ADC value */
uint16_t ADC1_Read()
{
    ADC1->CR2 |= (1<<30);     // Start conversion

    while(!(ADC1->SR & (1<<1))); // Wait EOC

    return ADC1->DR;
}/*
 * adc.c
 *
 *  Created on: 09-Mar-2026
 *      Author: SHANMUKHA VARDHAN
 */


