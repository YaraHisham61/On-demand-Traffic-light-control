/*
 * button.h
 *
 * Created: 9/7/2022 10:45:42 PM
 *  Author: YARA
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO/dio.h"

/************************************************************************/
/*                           FUNCTIONS                                  */
/************************************************************************/
void BUTTON_init(uint8_t buttonPort , uint8_t buttonPinNumber);
uint8_t BUTTON_read(uint8_t buttonPort , uint8_t buttonPinNumber);

#endif /* BUTTON_H_ */