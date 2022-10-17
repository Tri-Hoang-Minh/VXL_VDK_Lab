/*
 * software_timer.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Hoang Tri
 */


#include "software_timer.h"
int timer0_counter=0;
int timer0_flag= 0;
int TIME_CYCLE = 10;  // 10ms
void setTimer0(int duration)
{
	timer0_counter = duration/TIME_CYCLE;
	timer0_flag = 0;
}
void timerRun()
{
	if(timer0_counter > 0)
	{
		timer0_counter --;
		if(timer0_counter <= 0)
		{
			timer0_flag=1;
		}
	}
}
