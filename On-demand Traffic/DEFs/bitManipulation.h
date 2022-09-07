/*
 * bitManipulation.h
 *
 * Created: 9/7/2022 11:01:28 PM
 *  Author: YARA
 */ 


#ifndef BITMANIPULATION_H_
#define BITMANIPULATION_H_

/************************************************************************/
/*                          MACROS                                      */
/************************************************************************/
#define SET_BIT(X,BIT_NO) X|=(1<<BIT_NO) //Set bit MACRO
#define CLR_BIT(X,BIT_NO) X&=~(1<<BIT_NO) //Clear bit MACRO
#define READ_BIT(X,BIT_NO) ((X&(1<<BIT_NO))>>BIT_NO) //Read bit MACRO
#define TOGGLE_BIT(X,BIT_NO) X^=(1<<BIT_NO) //Toggle bit MACRO

#endif /* BITMANIPULATION_H_ */