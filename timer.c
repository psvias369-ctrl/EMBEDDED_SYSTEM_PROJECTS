#include "timer.h"

/* Initialize TIM2 */
void TIM2_Init(uint32_t psc, uint32_t arr)
{
    RCC->APB1ENR |= (1<<0);  // Enable TIM2 clock

    TIM2->PSC = psc;         // prescaler
    TIM2->ARR = arr;         // auto reload

    TIM2->CR1 |= (1<<0);     // start timer
}

/* Wait until timer overflow */
void TIM2_Delay(void)
{
    while(!(TIM2->SR & (1<<0)));

    TIM2->SR &= ~(1<<0);     // clear flag
}


