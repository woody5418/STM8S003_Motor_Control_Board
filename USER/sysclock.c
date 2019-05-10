#include "sysclock.h"

/*******************************************************************************
 * 名称: Sysclock_Init
 * 功能: 设置系统时钟频率
 * 形参: 无
 * 返回: 无
 * 说明: 时钟选择为内部16MHz的内部RC震荡

 ******************************************************************************/
void SystemClock_Init(void)
{
  CLK_HSICmd(ENABLE);/* Set HSIEN bit */
  CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1); /* Fmaster = 16MHz */
}



