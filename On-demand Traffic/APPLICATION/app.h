/*
 * app.h
 *
 * Created: 9/7/2022 11:48:11 PM
 *  Author: YARA
 */ 


#ifndef APP_H_
#define APP_H_

#include "../ECUAL/BUTTON/button.h"
#include "../ECUAL/LED/led.h"
#include "../MCAL/TIMER0/timer.h"
#include "../DEFs/Interrupts.h"
#include "../DEFs/types.h"
#include "MODES/modes.h"

void APP_init();
void APP_start();

#endif /* APP_H_ */