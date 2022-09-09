/*
 * modes.c
 *
 * Created: 9/8/2022 7:18:30 PM
 *  Author: YARA
 */ 

#include "modes.h"


void normalMode0()
{	
	LED_off(PORT_A,1); //Yellow LED for cars is off
	LED_off(PORT_A,2); //Red LED for cars is off
	LED_off(PORT_B,0); //Green LED for pedestrians is off
	LED_off(PORT_B,1); //Yellow LED for pedestrians is off
	
	LED_on(PORT_A,0); //Green for cars
	LED_on(PORT_B,2); //Red for pedestrians
}

void normalMode1()
{
	LED_off(PORT_A,1); //Yellow LED for cars is off
	LED_off(PORT_A,0); //Green LED for cars is off
	LED_off(PORT_B,0); //Green LED for pedestrians is off
	LED_off(PORT_B,1); //Yellow LED for pedestrians is off
	
	LED_on(PORT_A,2); //Red for cars
	LED_on(PORT_B,2); //Red for pedestrians
}


void yellowBlink0()
{
	//All red & green LEDs are off 
	LED_off(PORT_A,0);
	LED_off(PORT_A,2);
	LED_off(PORT_B,0);
	LED_off(PORT_B,2);
	
	LED_on(PORT_B,2); //Red for pedestrians
	LED_toggle(PORT_A,1); //Yellow LED for cars is blinking
	
}

void yellowBlink1()
{
	//All red & green LEDs are off
	LED_off(PORT_A,0);
	LED_off(PORT_A,2);
	LED_off(PORT_B,0);
	LED_off(PORT_B,2);
	
	LED_toggle(PORT_A,1); //Yellow LED for cars is blinking
	LED_toggle(PORT_B,1); //Yellow LED for pedestrian is blinking
	
}

void pedestrianMode()
{
	LED_off(PORT_A,1); //Yellow LED for cars is off
	LED_off(PORT_A,0); //Green LED for cars is off
	LED_off(PORT_B,2); //Red LED for pedestrians is off
	LED_off(PORT_B,1); //Yellow LED for pedestrians is off
	
	LED_on(PORT_B,0); //Green for pedestrians
	LED_on(PORT_A,2); //Red for cars
	
}