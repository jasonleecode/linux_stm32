#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
#define LED0 PBout(3)// PB5
#define LED1 PCout(2)// PE5	

void LED_Init(void);//��ʼ��

		 				    
#endif