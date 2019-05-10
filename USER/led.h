/********************************************************************
 *@file        led.h
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       led ��ʼ���Լ�LED_Show����
 *******************************************************************/
#ifndef __LED_H
#define __LED_H



#include "stm8s.h"

#define LED_PORT            GPIOC	 //LED  PA1
#define LED_1               GPIO_PIN_7

#define ON       0		/* ����LED���� -- �͵�ƽ*/
#define OFF      1		/* ����LED���� -- �ߵ�ƽ*/

void LED_Init(void);
void LED_Show(void);
void LED_Config(GPIO_Pin_TypeDef led, u8 state);

#endif