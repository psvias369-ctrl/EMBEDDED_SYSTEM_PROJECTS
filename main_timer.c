#include "timer.h"
#include "stm32f4xx.h"

void GPIO_Init()
{
    RCC->AHB1ENR |= (1<<0);
    GPIOA->MODER |= (1<<(5*2));
}

int main()
{
    GPIO_Init();

    TIM2_Init(8399,9999);   // ~1 second delay

    while(1)
    {
        GPIOA->ODR ^= (1<<5);
        TIM2_Delay();
    }
}
