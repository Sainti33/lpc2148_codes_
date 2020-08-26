#include "delay.h"
void delay_ms(unsigned long dly)
{
while(dly--)
delay_us(1100);
}

void delay_us(unsigned long dly){
	unsigned int i;
while(dly--){
 i++;i++;i++;
 i++;i++;i++;
 }
}

