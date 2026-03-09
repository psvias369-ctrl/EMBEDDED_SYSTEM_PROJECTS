#include "gpio.h"

void delay()
{
    for(int i=0;i<500000;i++);
}

int main()
{
    GPIO_Init_Output(GPIOA,5);   // LED on PA5

    while(1)
    {
        GPIO_Toggle(GPIOA,5);
        delay();
    }
}
