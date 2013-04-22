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

//这一段无需改动
//This segment should not be modified
#ifndef TRUE
#define TRUE  1
#endif

#ifndef FALSE
#define FALSE 0
#endif

typedef unsigned char  uint8;                   /* defined for unsigned 8-bits integer variable 	无符号8位整型变量  */
typedef signed   char  int8;                    /* defined for signed 8-bits integer variable		有符号8位整型变量  */
typedef unsigned short uint16;                  /* defined for unsigned 16-bits integer variable 	无符号16位整型变量 */
typedef signed   short int16;                   /* defined for signed 16-bits integer variable 		有符号16位整型变量 */
typedef unsigned int   uint32;                  /* defined for unsigned 32-bits integer variable 	无符号32位整型变量 */
typedef signed   int   int32;                   /* defined for signed 32-bits integer variable 		有符号32位整型变量 */
typedef float          fp32;                    /* single precision floating point variable (32bits) 单精度浮点数（32位长度） */
typedef double         fp64;                    /* double precision floating point variable (64bits) 双精度浮点数（64位长度） */


/********************************/
/*     应用程序配置             */
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


#include    "GUI_CONFIG.H"
#include    "rit128x96x4.h"
#include    "LCMDRV.h"
#include    "GUI_BASIC.H"
#include    "GUI_STOCKC.H"
#include    "FONT_MACRO.H"
#include    "FONT5_7.H"
#include    "FONT8_8.H"
#include    "FONT24_32.H"
#include    "LOADBIT.H"
#include    "WINDOWS.H"
#include    "MENU.H"
#include    "spline.H"

#endif /* __CONFIG_H */

/********************************************************************************************************
**                            End Of File
********************************************************************************************************/

