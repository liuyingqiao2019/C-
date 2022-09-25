#include <bits/stdc++.h>
#include <windows.h>
#define inc(i,a,b) for(register int i=a;i<=b;i++)
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) &0x8000)?1:0)
using namespace std;
void leftclick()//鼠标左击 
{
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);	
}

void rightclick()//鼠标右击 
{
	mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
 } 
 
 void middleclick()//鼠标中键击
 {
 	mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0); 
 }
 void leftdoubleclick()//鼠标左击 
{
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);	
} 
   void press(int asi)//模拟按键 
   {
   	keybd_event(asi,0,0,0);
   	keybd_event(asi,0,KEYEVENTF_KEYUP,0);
   	Sleep(100);
	} 
	/*键码对应：
	数字键盘:
	0~9  -->  96~105
	*              -->  106 
	+              -->  107
	Enter          -->  108
	-              -->  109 
	.              -->  110 
	/              -->  111
	主键盘： 
	0~9            -->  48~57 
	A~Z            -->  65~90 
	F1~F2          -->  112~123
	Tab            -->  9
	Enter          -->  13
	 
    更多查询https://www.cnblogs.com/lxwphp/p/9548823.html
 	
	*/ 
int main()
{
	POINT P;
	int x=GetSystemMetrics(SM_CXSCREEN);
	int y=GetSystemMetrics(SM_CYSCREEN);
	while(1)
	{
		//GetCursorPos(&P);
		//printf("%d %d    \r",P.x,P.y);//获取鼠标位置 
	//	SetCursorPos(rand()%x,rand()%y);//鼠标随机出现 
	
		

		 
	//	leftclick();
	//	rightclick();
	//	middleclick();
	//	leftdoubleclick();
		press(69);
		//按下指定键终止程序 
		if(KEY_DOWN('0'))//按0停止 
		{
			return 0;
		}
	}
}

