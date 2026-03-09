#include "adc.h"

uint16_t adc_value;

int main()
{
    ADC1_Init();

    while(1)
    {
        adc_value = ADC1_Read();
    }
}
