#ifndef __SYSCLOCK_H
#define __SYSCLOCK_H


#include "stm8s.h"


#define CFQ_FRNT_PORT       GPIOC	 //触发器  PC3

#define CFQ_1               GPIO_PIN_3    //前一级



/* 声明给外部使用的函数 */
void SystemClock_Init(void);

#endif

