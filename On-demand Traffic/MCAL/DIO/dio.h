/*
 * dio.h
 *
 * Created: 9/7/2022 6:21:50 PM
 *  Author: YARA
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../DEFs/registers.h"
#include "../../DEFs/bitManipulation.h"
#include "../../DEFs/types.h"

/************************************************************************/
/*                          MACROS                                      */
/************************************************************************/

#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

#define IN 0
#define LOW 0
#define OUT 1
#define HIGH 1

/************************************************************************/
/*                           FUNCTIONS                                  */
/************************************************************************/

void DIO_init(uint8_t port , uint8_t pinNumber , uint8_t direction); //Initialization dio direction
void DIO_write(uint8_t port , uint8_t pinNumber , uint8_t value); //Write data to dio
void DIO_read(uint8_t port , uint8_t pinNumber , uint8_t * value); //Read data in dio
void DIO_toggle(uint8_t port , uint8_t pinNumber); //Toggle dio

#endif /* DIO_H_ */