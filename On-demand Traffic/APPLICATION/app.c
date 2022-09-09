/*
 * app.c
 *
 * Created: 9/7/2022 11:47:58 PM
 *  Author: YARA
 */ 

#include "app.h"

uint8_t mode=0; // 0 for normal mode & 1 for pedestrian mode

void APP_init()
{
	//Initialization of button in port D pin 2 as an input
	BUTTON_init(PORT_D,2);
	
	//Initialization of cars & Pedestrian LEDs
	LED_init(PORT_A,0);
	LED_init(PORT_A,1);
	LED_init(PORT_A,2);
	LED_init(PORT_B,0);
	LED_init(PORT_B,1);
	LED_init(PORT_B,2);
	
	//Timer0 initialization
	void TIMER0_initMode();
	
	//Interrupts setup
	sei();
	RISING_EDGE();
	ENABLE_EXT_INTERRUPTS();
	
	//Starting in normal mode
	mode=0;
}

void APP_start()
{
	uint8_t i;
	while(1)
	{
		
		if (mode == 0)
			normalMode0();
		else
			pedestrianMode();
			
		for (i=0;i<5;i++) //Delay 5 sec
		{
			TIMER0_delay();
			
			if(mode == 1) //Pedestrian button is pressed
				break;
		}
		
		///////////////////YELLOW BLINKING///////////////////
		if(mode == 0)
		{
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink0();
				TIMER0_delay();
				
				if (mode == 1 ) //Pedestrian button is pressed
					break;
			}
		}
		
		if (mode == 1)
		{
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink1();
				TIMER0_delay();
			}
		}
		
	}
}

ISR(EXT_INT_0) //Pedestrian button is pressed
{
	mode=1; //Pedestrian mode is on
}