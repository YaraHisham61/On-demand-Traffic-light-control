/*
 * button.c
 *
 * Created: 9/7/2022 10:45:18 PM
 *  Author: YARA
 */ 

#include "button.h"

void BUTTON_init(uint8_t buttonPort , uint8_t buttonPinNumber) //Input device
{
	DIO_init(buttonPort,buttonPinNumber,IN);
}

void BUTTON_read(uint8_t buttonPort , uint8_t buttonPinNumber, uint8_t * buttonState)
{
	DIO_read(buttonPort,buttonPinNumber,buttonState);
}