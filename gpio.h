#ifndef GPIO_H
#define GPIO_H

#include "stm32f4xx.h"

void GPIO_Init_Output(GPIO_TypeDef *port, uint8_t pin);
void GPIO_Toggle(GPIO_TypeDef *port, uint8_t pin);

#endif
