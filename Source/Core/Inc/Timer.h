/*
 * Timer.h
 *
 *  Created on: Sep 18, 2024
 *      Author: ADMINS
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#define MAX_TIMER		1

int TIMER_CYCLE = 10;

int Timer_Counter[MAX_TIMER];
int Timer_Flag[MAX_TIMER];

void setTimer(int index, int duration);

void runTimer(void);


#endif /* INC_TIMER_H_ */
