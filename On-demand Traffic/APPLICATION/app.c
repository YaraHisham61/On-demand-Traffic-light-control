/*
 * app.c
 *
 * Created: 9/7/2022 11:47:58 PM
 *  Author: YARA
 */ 

#include "app.h"


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
			
			if(mode == 1 && ! BUTTON_read(PORT_D,2) ) //Pedestrian button is pressed
				break;
		}
		
		///////////////////YELLOW BLINKING///////////////////
		if(mode == 0)
		{
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink0(); //only yellow LED for car is blinking
				TIMER0_delay();
				
				if (mode == 1 && ! BUTTON_read(PORT_D,2) ) //Pedestrian button is pressed
					break;
			}
		}
		
		if (mode == 1 && ! BUTTON_read(PORT_D,2))
		{
			LED_off(PORT_A,1); 	
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink1(); //Both yellow LEDs are blinking
				TIMER0_delay();
			}
			
			for (i=0;i<5;i++) //Delay 5 sec
			{
				pedestrianMode();
				TIMER0_delay();
			}
		}
		
		
		if (mode == 0)
		{
			for (i=0;i<5;i++) //Delay 5 sec
			{
				normalMode1();
				TIMER0_delay();
			}
		}
		
		else if(! BUTTON_read(PORT_D,2))
		{
			LED_off(PORT_A,1);
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink1();
				TIMER0_delay();
			}
		}
		
		if(mode == 0)
		{
			for (i=0;i<5;i++) //Delay 5 sec
			{
				yellowBlink0(); //only yellow LED for car is blinking
				TIMER0_delay();
			
				if (mode == 1 ) //Pedestrian button is pressed
				break;
			}
		}
		mode=0;
}
}

ISR(EXT_INT_0) //Pedestrian button is pressed
{
	mode=1; //Pedestrian mode is on
}