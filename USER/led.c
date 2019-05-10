/********************************************************************
 *@file        led.c
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       LED ��ʼ���Լ�LED_Show����
 *******************************************************************/
#include "led.h"
#include "delay.h"
/*******************************************************************************
 * ��������LED_Init
 * ����  ������LED_Init�ĳ�ʼ������
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void LED_Init(void)
{       
    /*����LED�Ĺܽ�Ϊ���ģʽ*/
    GPIO_Init(LED_PORT, LED_1, GPIO_MODE_OUT_PP_HIGH_FAST );
}

/*******************************************************************************
 * ��������LED_Config
 * ����  ������LED��ʼ������
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void LED_Config(GPIO_Pin_TypeDef led, u8 state)
{
    if(ON == state) 
    {
        GPIO_WriteLow(LED_PORT, led);
    }
    else
    {
        GPIO_WriteHigh(LED_PORT, led);
    }
}

/*******************************************************************************
 * ��������LED_Show
 * ����  ������LED_Show��ʼ������
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void LED_Show(void)
{
    LED_Config(LED_1, OFF);// ��
    delay_ms(100);
    LED_Config(LED_1, ON);//  ��
    delay_ms(100);
    
     LED_Config(LED_1, OFF);// ��
    delay_ms(100);
    LED_Config(LED_1, ON);//  ��
    delay_ms(100);
    
     LED_Config(LED_1, OFF);// ��
    delay_ms(100);
    LED_Config(LED_1, ON);//  ��
    delay_ms(100);
    
     LED_Config(LED_1, OFF);// ��
    delay_ms(100);
    LED_Config(LED_1, ON);//  ��
    delay_ms(100);
    
     LED_Config(LED_1, OFF);// ��
    delay_ms(100);
    LED_Config(LED_1, ON);//  ��
    delay_ms(100);
}


