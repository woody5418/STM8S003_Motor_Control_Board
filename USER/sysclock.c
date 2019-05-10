#include "sysclock.h"

/*******************************************************************************
 * ����: Sysclock_Init
 * ����: ����ϵͳʱ��Ƶ��
 * �β�: ��
 * ����: ��
 * ˵��: ʱ��ѡ��Ϊ�ڲ�16MHz���ڲ�RC��

 ******************************************************************************/
void SystemClock_Init(void)
{
  CLK_HSICmd(ENABLE);/* Set HSIEN bit */
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); /* Fmaster = 16MHz */
}



