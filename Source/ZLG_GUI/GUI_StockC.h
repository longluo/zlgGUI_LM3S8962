/****************************************************************************************
* 文件名：GUI_STOCKC.H
* 功能：设置前景色及背景色变量，用于ASCII码、汉字、窗口、单色位图显示。(头文件)
* 作者：黄绍斌
* 日期：2004.02.28
* 备注：
****************************************************************************************/

#ifndef  GUI_STOCKC_H
#define  GUI_STOCKC_H

extern  uint8 const  DCB2HEX_TAB[8];
extern  TCOLOR  disp_color;
extern  TCOLOR  back_color;


/****************************************************************************
* 名称：GUI_SetColor()
* 功能：设置显示色及背景色。用于ASCII字符显示及汉字显示。
* 入口参数：color1  显示色的值
*          color2   背景色的值
* 出口参数：无
* 说明：
****************************************************************************/
extern  void  GUI_SetColor(TCOLOR color1, TCOLOR color2);


/****************************************************************************
* 名称：GUI_GetBackColor()
* 功能：最得当前背景色。
* 入口参数：bakc        保存颜色的变量地址
* 出口参数：无
* 说明：
****************************************************************************/
extern  void  GUI_GetBackColor(TCOLOR  *bakc);


/****************************************************************************
* 名称：GUI_GetDispColor()
* 功能：最得当前前景色。
* 入口参数：bakc        保存颜色的变量地址
* 出口参数：无
* 说明：
****************************************************************************/
extern  void  GUI_GetDispColor(TCOLOR  *bakc);


/****************************************************************************
* 名称：GUI_ExchangeColor()
* 功能：交换前景色与背景色。用于反相显示。
* 入口参数：无
* 出口参数：无
* 说明：
****************************************************************************/
extern  void  GUI_ExchangeColor(void);


#endif /* GUI_STOCKC_H */

