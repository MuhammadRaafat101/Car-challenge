/*
 * TIMER.c
 *
 *  Created on: Sep 22, 2019
 *      Author: Rafaat
 */

#include "TIMER.h"

status Timer_Init()
{
	uint8 Status =0;
	uint8 Index = 0;
	for(Index = 0; Index < NUM_OF_TIMERS;Index++)
	{
		Timer_arr[Index].Init=OK;
		switch(Timer_arr[Index].Timer)
		{
		case TIMER_0 :
			if(Timer_arr[Index].Mode == NORMAL)
			{
				if(Timer_arr[Index].Prescaler >  CLK_FALING )
				{
					Status =NOK;
				}else
				{
					TCCR0 |= Timer_arr[Index].Prescaler ;

				}

				TCNT0 = Timer_arr[Index].CounterLoad;
				if(Timer_arr[Index].ISR == ISR_EN)
				{
					TIMSK |= 1<<TOIE0; // Interrupt when overflow
				}else
				{
					TIMSK &= ~(1<<TOIE0);
				}
			}
			else if(Timer_arr[Index].Mode == PWM)
			{

			}

			break;
		case TIMER_1 :

			break;
		case TIMER_2 :
			if(Timer_arr[Index].Mode == NORMAL)
			{
				if(Timer_arr[Index].Prescaler < CLK_FALING )
				{
					TCCR2 |= Timer_arr[Index].Prescaler ;
				}else
				{
					Status =NOK;
				}

				TCNT2 = Timer_arr[Index].CounterLoad;
				if(Timer_arr[Index].ISR == ISR_EN)
				{
					TIMSK |= 1<<TOIE2; // Interrupt when overflow
				}else
				{
					TIMSK &= ~(1<<TOIE2);
				}
			}
			else if(Timer_arr[Index].Mode == PWM)
			{

			}

			break;
		}


	}
	return Status;
}

