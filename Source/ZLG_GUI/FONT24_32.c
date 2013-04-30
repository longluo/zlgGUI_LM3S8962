/****************************************************************************************
* 文件名：FONT24_32.C
* 功能：24*32 ASCII码字体及显示函数。
* 作者：黄绍斌
* 日期：2004.02.26
* 备注：使用GUI_SetColor()函数设置前景颜色及背景色。
****************************************************************************************/
#include "config.h"

#if  FONT24x32_EN==1

/* 24*32字体定义 */
const uint8  FONT24x32[][96] = {
/*  0  */
  {
   ________,_XXXXXXX,________,
   _______X,XXXXXXXX,XX______,
   ______XX,XXXXXXXX,XXX_____,
   _____XXX,XXXXXXXX,XXXX____,
   ____XXXX,XXX___XX,XXXXX___,
   ____XXXX,X_______,XXXXX___,
   ___XXXXX,________,_XXXXX__,
   ___XXXXX,________,_XXXXX__,
   ___XXXXX,________,_XXXXX__,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   ___XXXXX,________,_XXXXX__,
   ___XXXXX,________,_XXXXX__,
   ___XXXXX,________,_XXXXX__,
   ____XXXX,X_______,XXXXX___,
   ____XXXX,XXX___XX,XXXXX___,
   _____XXX,XXXXXXXX,XXXX____,
   ______XX,XXXXXXXX,XXX_____,
   _______X,XXXXXXXX,XX______,
   ________,_XXXXXXX,________}

/*  1  */
 ,{
   ________,______XX,XX______,
   ________,______XX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,____XXXX,XX______,
   ________,__XXXXXX,XX______,
   ______XX,XXXXXXXX,XX______,
   ______XX,XXXXXXXX,XX______,
   ______XX,XXXXXXXX,XX______,
   ______XX,XXXXXXXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______,
   ________,_____XXX,XX______}

/*  2  */
 ,{
   ________,_XXXXXXX,X_______,
   _______X,XXXXXXXX,XXX_____,
   ______XX,XXXXXXXX,XXXX____,
   _____XXX,XXXXXXXX,XXXXX___,
   ____XXXX,XXX____X,XXXXXX__,
   ___XXXXX,X_______,XXXXXX__,
   ___XXXXX,________,_XXXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   __XXXXX_,________,__XXXXX_,
   ________,________,__XXXXX_,
   ________,________,__XXXXX_,
   ________,________,__XXXXX_,
   ________,________,_XXXXXX_,
   ________,________,XXXXXX__,
   ________,_______X,XXXXXX__,
   ________,_____XXX,XXXXX___,
   ________,____XXXX,XXX_____,
   ________,__XXXXXX,XX______,
   ________,_XXXXXXX,X_______,
   _______X,XXXXXXX_,________,
   ______XX,XXXXXX__,________,
   _____XXX,XXXX____,________,
   ____XXXX,XXX_____,________,
   ____XXXX,XX______,________,
   ___XXXXX,X_______,________,
   ___XXXXX,________,________,
   __XXXXXX,XXXXXXXX,XXXXXXX_,
   __XXXXXX,XXXXXXXX,XXXXXXX_,
   __XXXXXX,XXXXXXXX,XXXXXXX_,
   __XXXXXX,XXXXXXXX,XXXXXXX_,
   __XXXXXX,XXXXXXXX,XXXXXXX_}

/*  3  */
 ,{
   ________,_XXXXXX_,________,
   ______XX,XXXXXXXX,XX______,
   _____XXX,XXXXXXXX,XXX_____,
   ____XXXX,XXXXXXXX,XXXX____,
   ___XXXXX,X______X,XXXXX___,
   ___XXXXX,________,XXXXX___,
   __XXXXX_,________,XXXXXX__,
   __XXXXX_,________,_XXXXX__,
   __XXXXX_,________,_XXXXX__,
   __XXXXX_,________,_XXXXX__,
   ________,________,XXXXX___,
   ________,________,XXXXX___,
   ________,_______X,XXXX____,
   ________,__XXXXXX,XXX_____,
   ________,__XXXXXX,XX______,
   ________,__XXXXXX,XXX_____,
   ________,__XXXXXX,XXXXX___,
   ________,_______X,XXXXXX__,
   ________,________,_XXXXX__,
   ________,________,_XXXXXX_,
   ________,________,__XXXXX_,
   ________,________,__XXXXX_,
   _XXXXX__,________,__XXXXX_,
   _XXXXX__,________,__XXXXX_,
   _XXXXX__,________,_XXXXXX_,
   __XXXXX_,________,_XXXXX__,
   __XXXXXX,________,XXXXXX__,
   ___XXXXX,X______X,XXXXX___,
   ____XXXX,XXXXXXXX,XXXX____,
   _____XXX,XXXXXXXX,XXX_____,
   ______XX,XXXXXXXX,XX______,
   ________,_XXXXXX_,________}

/*  4  */
 ,{
   ________,_______X,XXXX____,
   ________,______XX,XXXX____,
   ________,_____XXX,XXXX____,
   ________,_____XXX,XXXX____,
   ________,____XXXX,XXXX____,
   ________,___XXXXX,XXXX____,
   ________,___XXXX_,XXXX____,
   ________,__XXXXX_,XXXX____,
   ________,_XXXXX__,XXXX____,
   ________,_XXXX___,XXXX____,
   ________,XXXXX___,XXXX____,
   _______X,XXXX____,XXXX____,
   _______X,XXX_____,XXXX____,
   ______XX,XXX_____,XXXX____,
   _____XXX,XX______,XXXX____,
   _____XXX,X_______,XXXX____,
   ____XXXX,X_______,XXXX____,
   ___XXXXX,________,XXXX____,
   ___XXXX_,________,XXXX____,
   __XXXXX_,________,XXXX____,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____,
   ________,________,XXXX____}

/*  5  */
 ,{
   _____XXX,XXXXXXXX,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXXX__,
   ____XXXX,X_______,________,
   ____XXXX,X_______,________,
   ____XXXX,X_______,________,
   ____XXXX,X_______,________,
   ____XXXX,________,________,
   ____XXXX,________,________,
   ____XXXX,___XXXXX,________,
   ____XXXX,_XXXXXXX,XXX_____,
   ____XXXX,XXXXXXXX,XXXX____,
   ___XXXXX,XXXXXXXX,XXXXX___,
   ___XXXXX,XXX____X,XXXXXX__,
   ___XXXXX,X_______,_XXXXXX_,
   ___XXXXX,________,__XXXXX_,
   ________,________,__XXXXXX,
   ________,________,___XXXXX,
   ________,________,___XXXXX,
   ________,________,___XXXXX,
   ________,________,___XXXXX,
   ________,________,___XXXXX,
   __XXXXX_,________,__XXXXXX,
   __XXXXX_,________,__XXXXX_,
   ___XXXXX,________,_XXXXXX_,
   ___XXXXX,X_______,XXXXXX__,
   ____XXXX,XX____XX,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXX___,
   ______XX,XXXXXXXX,XXXX____,
   _______X,XXXXXXXX,XX______,
   ________,__XXXXX_,________}

/*  6  */
 ,{
   ________,__XXXXXX,XX______,
   ________,XXXXXXXX,XXXX____,
   _______X,XXXXXXXX,XXXXX___,
   ______XX,XXXXXXXX,XXXXXX__,
   _____XXX,XXX_____,_XXXXX__,
   ____XXXX,XX______,__XXXXX_,
   ____XXXX,X_______,___XXXX_,
   ___XXXXX,________,___XXXX_,
   ___XXXXX,________,________,
   ___XXXXX,________,________,
   __XXXXX_,________,________,
   __XXXXX_,___XXXXX,________,
   __XXXXX_,_XXXXXXX,XXX_____,
   __XXXXX_,XXXXXXXX,XXXX____,
   __XXXXXX,XXXXXXXX,XXXXX___,
   __XXXXXX,XX______,XXXXXX__,
   __XXXXXX,X_______,_XXXXXX_,
   __XXXXXX,________,__XXXXX_,
   __XXXXXX,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   ___XXXX_,________,___XXXXX,
   ___XXXXX,________,___XXXXX,
   ___XXXXX,________,___XXXXX,
   ____XXXX,X_______,__XXXXX_,
   ____XXXX,X_______,_XXXXXX_,
   _____XXX,XXX_____,XXXXXX__,
   ______XX,XXXXXXXX,XXXXX___,
   _______X,XXXXXXXX,XXXX____,
   ________,XXXXXXXX,XXX_____,
   ________,___XXXXX,________}

/*  7  */
 ,{
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   __XXXXXX,XXXXXXXX,XXXXXXXX,
   ________,________,___XXXXX,
   ________,________,__XXXXX_,
   ________,________,_XXXXX__,
   ________,________,XXXXX___,
   ________,_______X,XXXX____,
   ________,______XX,XXX_____,
   ________,_____XXX,XXX_____,
   ________,_____XXX,XX______,
   ________,____XXXX,XX______,
   ________,___XXXXX,X_______,
   ________,___XXXXX,X_______,
   ________,__XXXXXX,________,
   ________,__XXXXXX,________,
   ________,_XXXXXX_,________,
   ________,_XXXXXX_,________,
   ________,_XXXXXX_,________,
   ________,XXXXXX__,________,
   ________,XXXXXX__,________,
   ________,XXXXXX__,________,
   _______X,XXXXX___,________,
   _______X,XXXXX___,________,
   _______X,XXXXX___,________,
   _______X,XXXXX___,________,
   ______XX,XXXX____,________,
   ______XX,XXXX____,________,
   ______XX,XXXX____,________,
   ______XX,XXXX____,________}

/*  8  */
 ,{
   ________,_XXXXXXX,X_______,
   _______X,XXXXXXXX,XXX_____,
   _____XXX,XXXXXXXX,XXXXX___,
   ____XXXX,XXXXXXXX,XXXXXX__,
   ____XXXX,XX______,XXXXXX__,
   ___XXXXX,X_______,_XXXXXX_,
   ___XXXXX,________,__XXXXX_,
   ___XXXXX,________,__XXXXX_,
   ___XXXXX,________,__XXXXX_,
   ___XXXXX,________,__XXXXX_,
   ___XXXXX,X_______,_XXXXXX_,
   ____XXXX,X_______,_XXXXX__,
   ____XXXX,XXX____X,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXX___,
   _______X,XXXXXXXX,XXX_____,
   ______XX,XXXXXXXX,XXXX____,
   ____XXXX,XXXXXXXX,XXXXXX__,
   ___XXXXX,XXX____X,XXXXXXX_,
   ___XXXXX,________,__XXXXX_,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXXX,________,__XXXXXX,
   ___XXXXX,________,__XXXXX_,
   ___XXXXX,XX______,XXXXXXX_,
   ____XXXX,XXXXXXXX,XXXXXX__,
   _____XXX,XXXXXXXX,XXXXX___,
   ______XX,XXXXXXXX,XXXX____,
   ________,XXXXXXXX,XX______}

/*  9  */
 ,{
   ________,_XXXXXXX,X_______,
   _______X,XXXXXXXX,XXX_____,
   ______XX,XXXXXXXX,XXXX____,
   _____XXX,XXXXXXXX,XXXXX___,
   ____XXXX,XX______,XXXXXX__,
   ___XXXXX,X_______,_XXXXX__,
   ___XXXXX,________,__XXXXX_,
   ___XXXX_,________,__XXXXX_,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   __XXXXX_,________,___XXXXX,
   ___XXXX_,________,__XXXXXX,
   ___XXXXX,________,__XXXXXX,
   ___XXXXX,X_______,_XXXXXXX,
   ____XXXX,XX_____X,XXXXXXXX,
   _____XXX,XXXXXXXX,XXXXXXXX,
   ______XX,XXXXXXXX,XX_XXXXX,
   ________,XXXXXXXX,___XXXXX,
   ________,__XXXX__,___XXXXX,
   ________,________,__XXXXXX,
   ________,________,__XXXXX_,
   ________,________,__XXXXX_,
   __XXXXX_,________,_XXXXXX_,
   __XXXXX_,________,_XXXXX__,
   ___XXXXX,________,XXXXX___,
   ___XXXXX,X______X,XXXXX___,
   ____XXXX,XXXXXXXX,XXXX____,
   _____XXX,XXXXXXXX,XXX_____,
   ______XX,XXXXXXXX,XX______,
   ________,XXXXXXXX,________}

/*  .  */
 ,{
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,___XXX__,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,___XXX__,________}

/*  +  */
 ,{
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,__XXXX__,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________}

/*  -  */
 ,{
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   __XXXXXX,XXXXXXXX,XXXXXX__,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________}

/*  :  */
 ,{
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,___XXX__,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,___XXX__,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,___XXX__,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,__XXXXX_,________,
   ________,___XXX__,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________}
   
/*  空格  */   
 ,{
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________,
   ________,________,________}
};

/* ASCII码字符字模检索表 */
const  char  FONT24x32_TAB[]="0123456789.+-: "; 

/****************************************************************************
* 名称：GUI_PutChar24_32()
* 功能：显示ASCII码(24*32字体)，显示值为'0'-'9'、'.'、'+'、'-'及':'(若为其它值，则显示' ')。
* 入口参数： x		指定显示位置，x坐标
*           y		指定显示位置，y坐标
*           ch		要显示的ASCII码值。
* 出口参数：返回值为1时表示操作成功，为0时表示操作失败。
* 说明：操作失败原因是指定地址超出有效范围。
****************************************************************************/
uint8  GUI_PutChar24_32(uint32 x, uint32 y, uint8 ch)
{  uint8   font_dat;
   uint8   i, j;
   TCOLOR  bakc;

   /* 参数过滤 */
   if( x>(GUI_LCM_XMAX-32) ) return(0);
   if( y>(GUI_LCM_YMAX-32) ) return(0);
   for(i=0; i<14; i++)
   {  if(FONT24x32_TAB[i]==ch) break;
   }
   ch = i;
    
   for(i=0; i<32; i++)						// 显示共32行
   {  for(j=0; j<24; j++)					// 每行共24点
      {  /* 若当前点为0、8、16点，读取点阵数据 */
         if( (j&0x07)==0 ) font_dat = FONT24x32[ch][i*3+j>>3];      
         /* 设置相应的点为color或为back_color */
         if( (font_dat&DCB2HEX_TAB[j])==0 ) GUI_CopyColor(&bakc, back_color);
            else  GUI_CopyColor(&bakc, disp_color);
         GUI_Point(x, y, bakc);       
         x++;
      }
      
      y++;									// 指向下一行
      x -= 24;								// 恢复x值
   }
   
   return(1);
}

#endif

