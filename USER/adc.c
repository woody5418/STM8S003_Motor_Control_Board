/********************************************************************
 *@file        adc.c
 *@author      Woody      QQ��2490006131
 *@version     V1.0
 *@date        2016-10-14
 *@brief       ADC ��ʼ���Լ�ͨ���л�
 *******************************************************************/
#include "adc.h"
#include "delay.h"

/*******************************************************************************
 * ��������ADC_Init
 * ����  ������ADC1�ĳ�ʼ��
 * ����  ����
 * ���  ����
 * ����  ���ⲿ����
 ******************************************************************************/
void ADC_Init(void)
{  
    ADC1_DeInit();
    ADC1_Cmd(ENABLE);
    ADC1_Init(ADC1_CONVERSIONMODE_CONTINUOUS, ADC1_CHANNEL_3, ADC1_PRESSEL_FCPU_D2, \
    ADC1_EXTTRIG_TIM, DISABLE, ADC1_ALIGN_LEFT, ADC1_SCHMITTTRIG_CHANNEL3, DISABLE);
    ADC1_Cmd(ENABLE);
    ADC1_StartConversion(); 
}

