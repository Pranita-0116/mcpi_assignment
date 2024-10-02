/*
Author: Nilesh Ghule <nilesh@sunbeaminfo.com>
Course: PG-DESD @ Sunbeam Infotech
Date: Sep 30, 2024
*/

#ifndef TIMER_H
#define TIMER_H_

#include "stm32f4xx.h"
uint32_t extern volatile count,flag;

#define TCLK	16000000UL
#define PR		16000

void Timer_Init(uint32_t ms);
void TIM7_DAC_IRQHandler(void);


#endif /* TIMER_H_ */
