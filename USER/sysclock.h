#ifndef __SYSCLOCK_H
#define __SYSCLOCK_H


#include "stm8s.h"


#define CFQ_FRNT_PORT       GPIOC	 //������  PC3

#define CFQ_1               GPIO_PIN_3    //ǰһ��



/* �������ⲿʹ�õĺ��� */
void SystemClock_Init(void);

#endif

