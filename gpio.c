#include "gpio.h"

/* Configure pin as output */
void GPIO_Init_Output(GPIO_TypeDef *port, uint8_t pin)
{
    if(port == GPIOA) RCC->AHB1ENR |= (1<<0);
    if(port == GPIOB) RCC->AHB1ENR |= (1<<1);

    port->MODER &= ~(3 << (pin*2));   // clear mode
    port->MODER |=  (1 << (pin*2));   // output mode
}

/* Toggle pin */
void GPIO_Toggle(GPIO_TypeDef *port, uint8_t pin)
{
    port->ODR ^= (1<<pin);
}
