/*
 * app.c
 *
 *  Created on: Sep 20, 2019
 *      Author: Rafaat
 */


#include "DIO.h"
#include "Seven_Seg.h"
#include "Reg.h"
#include "TIMER.h"
#include <avr/interrupt.h>


void delay(uint32 x);
uint8 Digit= 0;
int main()
{

	//uint32 index =0;
	Dio_init();
	Timer_Init();
	//sei();
while(1)
{
	SegmentDisplay(Digit);
	delay(1);
}
	return 0;
}
/*just for polling */


void delay(uint32 x)
{ x *=15;
	for(uint8 y=0;y<x;y++)
	{
		while((TIFR & (1<<TOV0))==0);
		TIFR |= (1 << TOV0); // clear the overflow
	}
	Digit++;
}

ISR(TIMER0_OVF_vect)
{
	TIFR |= (1 << TOIE2);
	if(Digit == 10) Digit = 0;
	Digit++;
}
