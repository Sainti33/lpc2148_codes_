#include <lpc214x.h>
#include "delay.h"

void toggle_pins_p0_0_p1_31_config(void);
void toggle_pins_p0_0_p1_31(void);

int main(void)
{

	toggle_pins_p0_0_p1_31_config();
	while(1)
	{
   toggle_pins_p0_0_p1_31();
	}
}

void toggle_pins_p0_0_p1_31()
{
		IO0SET=0x000007ff;
		IO1SET=0xffff0000;
		delay_ms(1000);
		IO0CLR=0x000007ff;
		IO1CLR=0xffff0000;
		delay_ms(1000);
}

void toggle_pins_p0_0_p1_31_config()
{
	IO0DIR=0x000007ff;
  IO1DIR=0xffff0000;
}
