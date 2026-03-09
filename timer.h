#ifndef TIMER_H
#define TIMER_H

#include "stm32f4xx.h"

void TIM2_Init(uint32_t psc, uint32_t arr);
void TIM2_Delay(void);

#endif
