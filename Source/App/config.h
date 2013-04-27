/************************************************************************************
** File: - E:\ARM\lm3s8962projects\zlgGUI\Source\App\config.h
**  
** Copyright (C), Long.Luo, All Rights Reserved!
** 
** Description: 
**      User Configurable File
** 
** Version: 1.1
** Date created: 21:33:49,22/04/2013
** Author: Long.Luo
** 
** --------------------------- Revision History: --------------------------------
** 	<author>	<data>			<desc>
** 
************************************************************************************/

#ifndef __CONFIG_H 
#define __CONFIG_H

//��һ������Ķ�
//This segment should not be modified
#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE 0
#endif

typedef unsigned char  uint8;                   /* defined for unsigned 8-bits integer variable 	�޷���8λ���ͱ���  */
typedef signed   char  int8;                    /* defined for signed 8-bits integer variable		�з���8λ���ͱ���  */
typedef unsigned short uint16;                  /* defined for unsigned 16-bits integer variable 	�޷���16λ���ͱ��� */
typedef signed   short int16;                   /* defined for signed 16-bits integer variable 		�з���16λ���ͱ��� */
typedef unsigned int   uint32;                  /* defined for unsigned 32-bits integer variable 	�޷���32λ���ͱ��� */
typedef signed   int   int32;                   /* defined for signed 32-bits integer variable 		�з���32λ���ͱ��� */
typedef float          fp32;                    /* single precision floating point variable (32bits) �����ȸ�������32λ���ȣ� */
typedef double         fp64;                    /* double precision floating point variable (64bits) ˫���ȸ�������64λ���ȣ� */


/********************************/
/*     Ӧ�ó�������             */
/*Application Program Configurations*/
/********************************/
#include "hw_ints.h"
#include "hw_memmap.h"
#include "hw_sysctl.h"
#include "hw_types.h"
#include "debug.h"
#include "gpio.h"
#include "interrupt.h"
#include "sysctl.h"
#include "systick.h"
#include "rit128x96x4.h"


#include    "GUI_CONFIG.h"
#include    "rit128x96x4.h"
#include    "lcmdrv.h"
#include    "GUI_BASIC.h"
#include    "GUI_StockC.h"
#include    "FONT_MACRO.h"
#include    "FONT5_7.h"
#include    "FONT8_8.h"
#include    "FONT24_32.h"
#include    "loadbit.h"
#include    "windows.h"
#include    "menu.h"
#include    "spline.h"

#endif /* __CONFIG_H */

/********************************************************************************************************
**                            End Of File
********************************************************************************************************/

