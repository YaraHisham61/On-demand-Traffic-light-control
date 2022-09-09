/*
 * timer.c
 *
 * Created: 9/8/2022 6:23:31 PM
 *  Author: YARA
 */ 

#include "timer.h"

void TIMER0_initMode()
{
	TCCR0 = 0x00; //Normal mode
	TCNT0 = 0x00; //Initial value
}

void TIMER0_initValue(uint16_t value)
{
	TCNT0 = value; //Initial value
}

void TIMER0_prescalar(uint8_t x)
{
	switch(x)
	{
		case 0 : // No prescaling
		SET_BIT(TCCR0,0); 
		break;
		
		case 1 : // clk / 256
		SET_BIT(TCCR0,2);
		break;
	}
	
}

void TIMER0_delay() 
{
	//Function to generate delay of 1 sec
	
	//maxDelay = 2^8 * Ttick = 2^8 * (256(prescalar)/10^6)
	//noOfOverFlows = delay/maxDelay = 1 / 0.000256 =16
	uint32_t NUMBER_OF_OVERFLOWS=16; 
	uint32_t overflowCounter =0;
	TIMER0_prescalar(1);
	
	//initial value = 2^8 - ((delay / T tick)/noOfOverFlows) = 2^8 -((1/0.065536)/16) = 12
	TIMER0_initValue(12);
	
	while(overflowCounter < NUMBER_OF_OVERFLOWS)
	{
		while(READ_BIT(TIFR ,0) == 0);
		TIMER0_clrOverFlow(); //clearing overflow flag
		overflowCounter ++;
	}
	
	TIMER0_STOP(void);
}

void TIMER0_clrOverFlow()
{
	SET_BIT(TIFR,0);
}