
#include "main.h"
/**************************************************************************
作者：平衡小车之家 
淘宝店铺：http://shop114407458.taobao.com/
**************************************************************************/
/**************************实现函数**********************************************
*功    能:		定义led引脚
*********************************************************************************/
void led_init(void)
{
  /////////////////////////////////////LED初始化////////////////////////////////////
	RCC->APB2ENR|=1<<3;    //使能PORTB时钟	   	 
	GPIOB->CRH&=0XFFFFFFF0; 
	GPIOB->CRH|=0X00000003;//PB8 推挽输出 50MHZ   	 
}
/**************************程序结束*********************************************/
/**************************************************************************
函数功能：LED闪烁
入口参数：闪烁频率 
返回  值：无
作    者：平衡小车之家
**************************************************************************/
void Led_Flash(u16 time)
{
	  static int temp;
		if(++temp==time)	LED1=~LED1,temp=0;
}
