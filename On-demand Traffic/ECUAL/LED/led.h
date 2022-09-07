/*
 * led.h
 *
 * Created: 9/7/2022 10:34:51 PM
 *  Author: YARA
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO/dio.h"

/************************************************************************/
/*                           FUNCTIONS                                  */
/************************************************************************/
void LED_init(uint8_t ledPort , uint8_t ledPinNumber);
void LED_off(uint8_t ledPort , uint8_t ledPinNumber);
void LED_on(uint8_t ledPort , uint8_t ledPinNumber);
void LED_toggle(uint8_t ledPort , uint8_t ledPinNumber);

#endif /* LED_H_ */