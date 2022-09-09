/*
 * modes.h
 *
 * Created: 9/8/2022 7:18:14 PM
 *  Author: YARA
 */ 


#ifndef MODES_H_
#define MODES_H_

#include "../../ECUAL/BUTTON/button.h"
#include "../../ECUAL/LED/led.h"
#include "../../MCAL/TIMER0/timer.h"
#include "../../DEFs/Interrupts.h"

void normalMode0(); //Car led is green
void normalMode1(); //Car led is red

void yellowBlink0();
void yellowBlink1();

void pedestrianMode();

#endif /* MODES_H_ */