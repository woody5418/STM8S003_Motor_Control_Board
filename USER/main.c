/*************** (C) COPYRIGHT  ��ά���� ***************************************
 * �ļ���  ��main.c
 * ����    ������ģ��    
 * ��汾  ��V1.1.0
 * ������Ա��Woody QQ��2490006131
 * �޸�ʱ�䣺2016-10-14
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "stm8s.h"
#include "sysclock.h"
#include "delay.h"
#include "tim1.h"
#include "led.h"
#include "key.h"
#include "adc.h"

/*  Defines -----------------------------------------------------------*/
/*  Variate ---------------------------------------------------------*/

int main(void)
{    
  /* ϵͳʱ�ӳ�ʼ�� */
  SystemClock_Init(); 
  
  delay_init(16); /* ��ʱ��ʼ�� */
  key_init();     /*������ʼ��*/
  GPIO_INIT();    /*GPIO��ʼ��*/
  TIM1_Init();    /*��ʱ��1��ʼ��*/
  ADC_Init();
  enableInterrupts(); 	/* �������ж� */

  while (1)
  {
    key_scan(); //�������  
    PWM_set = ADC1_GetConversionValue()/64;  // ADCֵ���65536/64 = 1024��
  }
}

#ifdef USE_FULL_ASSERT

/**
  * @brief  Reports the name of the source file and the source line number
  *   where the assert_param error has occurred.
  * @param file: pointer to the source file name
  * @param line: assert_param error line source number
  * @retval : None
  */
void assert_failed(u8* file, u32 line)
{ 
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

  /* Infinite loop */
  while (1)
  {
    
  }
}
#endif






