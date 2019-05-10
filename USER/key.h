/********************************************************************
 *@file        key.h
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       KEY ��ʼ���Լ�ɨ�躯����ǰһ����⺯��
 *******************************************************************/
#ifndef __KEY_H
#define __KEY_H

#include "stm8s.h"

#define KEY_1               GPIO_PIN_1
#define KEY_PORT_1          GPIOA      /*����  PD2*/


void GPIO_INIT(void);
void key_init(void);
void key_scan(void);

void  DJ_HL_F(void);
void  DJ_HL_Z(void);

#endif