/*
 * Interrupts.h
 *
 * Created: 9/8/2022 6:50:09 PM
 *  Author: YARA
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include "registers.h"

/************************************************************************/
/*                            MACROS                                    */
/************************************************************************/

//Vector
#define EXT_INT_0 __vector_1

//Enable interrupts
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")

//Rising edge
#define RISING_EDGE() MCUCR|= (1<<1) | (1<<0)

//Setup use INT0
#define ENABLE_EXT_INTERRUPTS() GICR|=(1<<6)


//ISR
#define ISR(INT_VECT) void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)


#endif /* INTERRUPTS_H_ */