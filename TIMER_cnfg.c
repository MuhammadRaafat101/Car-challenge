/*
 * TIMER_cnfg.c
 *
 *  Created on: Sep 22, 2019
 *      Author: Rafaat
 */


#include "TIMER_cnfg.h"

Timer_Config Timer_arr[NUM_OF_TIMERS] ={
		{TIMER_0,NORMAL,CLK_DIV_256,ISR_DS,0,INITI},
		{TIMER_1,NORMAL,CLK_DIV_1024,ISR_DS,0,INITI},
		{TIMER_2,NORMAL,CLK_DIV_1024,ISR_DS,0,INITI},
};

extern Timer_Config Timer_arr[NUM_OF_TIMERS];
