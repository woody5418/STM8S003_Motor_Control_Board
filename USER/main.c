/*************** (C) COPYRIGHT  四维拓智 ***************************************
 * 文件名  ：main.c
 * 描述    ：工程模板    
 * 库版本  ：V1.1.0
 * 开发人员：Woody QQ：2490006131
 * 修改时间：2016-10-14
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
  /* 系统时钟初始化 */
  SystemClock_Init(); 
  
  delay_init(16); /* 延时初始化 */
  key_init();     /*按键初始化*/
  GPIO_INIT();    /*GPIO初始化*/
  TIM1_Init();    /*定时器1初始化*/
  ADC_Init();
  enableInterrupts(); 	/* 开启总中断 */

  while (1)
  {
    key_scan(); //方向控制  
    PWM_set = ADC1_GetConversionValue()/64;  // ADC值最大65536/64 = 1024；
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






