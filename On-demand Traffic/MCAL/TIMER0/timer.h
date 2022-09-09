/*
 * timer.h
 *
 * Created: 9/8/2022 6:22:31 PM
 *  Author: YARA
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../DEFs/registers.h"
#include "../../DEFs/bitManipulation.h"
#include "../../DEFs/types.h"

#define TIMER0_STOP(void) TCCR0=0x00;

void TIMER0_initMode();
void TIMER0_initValue(uint16_t value);
void TIMER0_prescalar(uint8_t x);
//void TIMER0_stop();
void TIMER0_delay();
void TIMER0_clrOverFlow();

#endif /* TIMER_H_ */