/****************************************************************************************
* 文件名：WINDOWS.H
* 功能：窗口管理。头文件，用于定义各种数据结构。
* 作者：黄绍斌
* 日期：2003.09.19
* 备注：
****************************************************************************************/

#ifndef  WINDOWS_H
#define  WINDOWS_H

/* 定义窗口数据结构 */
typedef struct
{
    uint32  x;          // 窗口位置(左上角的x坐标)
    uint32  y;          // 窗口位置(左上角的y坐标)

    uint32  with;       // 窗口宽度
    uint32  hight;      // 窗口高度

    uint8   *title;     // 定义标题栏指针 (标题字符为ASCII字符串，最大个数受窗口限制)
    uint8   *state;     // 定义状态栏指针 (若为空时则不显示状态栏)
}
WINDOWS;



/****************************************************************************
* 名称：GUI_WindowsDraw()
* 功能：显示窗口。根据提供的窗口参数进行画窗口
* 入口参数：dat     填充的数据(对于黑白色LCM，为0的点灭，为1的点显示)
* 出口参数：返回0表示操作失败，返回1表示操作成功
****************************************************************************/
extern  uint8  GUI_WindowsDraw(WINDOWS *win);



/****************************************************************************
* 名称：GUI_WindowsHide()
* 功能：消隐窗口。
* 入口参数：win     窗口句柄
* 出口参数：返回0表示操作失败，返回1表示操作成功
****************************************************************************/
extern uint8  GUI_WindowsHide(WINDOWS *win);



/****************************************************************************
* 名称：GUI_WindowsClr()
* 功能：清屏窗口。
* 入口参数：win     窗口句柄
* 出口参数：无
* 说明：使用此函数前要先使用GUI_WindowsDraw()将窗口画出。
****************************************************************************/
extern  void  GUI_WindowsClr(WINDOWS *win);


#endif /* WINDOWS_H */


