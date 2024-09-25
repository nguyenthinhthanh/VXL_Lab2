/*
 * Timer.c
 *
 *  Created on: Sep 18, 2024
 *      Author: ADMINS
 */

#include "Timer.h"



int TIMER_CYCLE = 10;

int Timer_Counter[MAX_TIMER];
int Timer_Flag[MAX_TIMER];

void setTimer(int index, int duration){
	Timer_Counter[index] = duration/TIMER_CYCLE;
	Timer_Flag[index] = 0;
}

void runTimer(void){
	for(int i=0;i<MAX_TIMER;i++){
		Timer_Counter[i]--;
		if(Timer_Counter[i] <=0){
			Timer_Flag[i] = 1;
		}
	}
}

