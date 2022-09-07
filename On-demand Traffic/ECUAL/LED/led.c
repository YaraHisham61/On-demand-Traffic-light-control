/*
 * led.c
 *
 * Created: 9/7/2022 10:34:35 PM
 *  Author: YARA
 */ 

#include "led.h"

void LED_init(uint8_t ledPort , uint8_t ledPinNumber) //Output device
{
	DIO_init(ledPort,ledPinNumber,OUT);
}

void LED_off(uint8_t ledPort , uint8_t ledPinNumber)
{
	DIO_write(ledPort,ledPinNumber,LOW);
}

void LED_on(uint8_t ledPort , uint8_t ledPinNumber)
{
	DIO_write(ledPort,ledPinNumber,HIGH);
}
void LED_toggle(uint8_t ledPort , uint8_t ledPinNumber)
{
	DIO_toggle(ledPort,ledPinNumber);
}