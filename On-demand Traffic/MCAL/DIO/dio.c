/*
 * dio.c
 *
 * Created: 9/7/2022 6:32:02 PM
 *  Author: YARA
 */ 

#include "dio.h"

void DIO_init(uint8_t port , uint8_t pinNumber , uint8_t direction)
{
	switch (port)
	{
		/////////////PORT A/////////////
	case PORT_A:
	if (direction == IN)
		CLR_BIT(DDRA,pinNumber);
	else if (direction == OUT)
		SET_BIT(DDRA,pinNumber);
	break;
		
		/////////////PORT B/////////////
	case PORT_B:
	if (direction == IN)
		CLR_BIT(DDRB,pinNumber);
	else if (direction == OUT)
		SET_BIT(DDRB,pinNumber);
	break;
		
		/////////////PORT C/////////////
	case PORT_C:
	if (direction == IN)
		CLR_BIT(DDRC,pinNumber);
	else if (direction == OUT)
		SET_BIT(DDRC,pinNumber);
	break;
	
		/////////////PORT D/////////////
	case PORT_D:
	if (direction == IN)
		CLR_BIT(DDRD,pinNumber);
	else if (direction == OUT)
		SET_BIT(DDRD,pinNumber);
	break;
	
		default: break;
	}
}

void DIO_write(uint8_t port , uint8_t pinNumber , uint8_t value)
{
	switch (port)
	{
		/////////////PORT A/////////////
		case PORT_A:
		if (value == LOW)
			CLR_BIT(PORTA,pinNumber);
		else if (value == HIGH)
			SET_BIT(PORTA,pinNumber);
		break;
		
		/////////////PORT B/////////////
		case PORT_B:
		if (value == LOW)
			CLR_BIT(PORTB,pinNumber);
		else if (value == HIGH)
			SET_BIT(PORTB,pinNumber);
		break;
		
		/////////////PORT C/////////////
		case PORT_C:
		if (value == LOW)
			CLR_BIT(PORTC,pinNumber);
		else if (value == HIGH)
			SET_BIT(PORTC,pinNumber);
		break;
		
		/////////////PORT D/////////////
		case PORT_D:
		if (value == LOW)
			CLR_BIT(PORTD,pinNumber);
		else if (value == HIGH)
			SET_BIT(PORTD,pinNumber);
		break;
		
		default: break;
	}
	
}

void DIO_read(uint8_t port , uint8_t pinNumber , uint8_t * value)
{
	switch(port)
	{
		/////////////PORT A/////////////
		case PORT_A:
		*value=READ_BIT(PINA,pinNumber);
		break;
		
		/////////////PORT B/////////////
		case PORT_B:
		*value=READ_BIT(PINB,pinNumber);
		break;
		
		/////////////PORT C/////////////
		case PORT_C:
		*value=READ_BIT(PINC,pinNumber);
		break;
		
		/////////////PORT D/////////////
		case PORT_D:
		*value=READ_BIT(PIND,pinNumber);
		break;
		
		default: break;
	}
	
}

void DIO_toggle(uint8_t port , uint8_t pinNumber)
{
	switch (port)
	{
		/////////////PORT A/////////////
		case PORT_A:
		TOGGLE_BIT(PORTA,pinNumber);
		break;
		
		/////////////PORT B/////////////
		case PORT_B:
		TOGGLE_BIT(PORTB,pinNumber);
		break;
		
		/////////////PORT C/////////////
		case PORT_C:
		TOGGLE_BIT(PORTC,pinNumber);
		break;
		
		/////////////PORT D/////////////
		case PORT_D:
		TOGGLE_BIT(PORTD,pinNumber);
		break;
		
		default: break;
	}
	
}