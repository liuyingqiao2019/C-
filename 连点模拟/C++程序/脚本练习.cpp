#include <bits/stdc++.h>
#include <windows.h>
#define inc(i,a,b) for(register int i=a;i<=b;i++)
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) &0x8000)?1:0)
using namespace std;
void leftclick()//������ 
{
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);	
}

void rightclick()//����һ� 
{
	mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
 } 
 
 void middleclick()//����м���
 {
 	mouse_event(MOUSEEVENTF_MIDDLEDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_MIDDLEUP,0,0,0,0); 
 }
 void leftdoubleclick()//������ 
{
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
	Sleep(100);
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);	
} 
   void press(int asi)//ģ�ⰴ�� 
   {
   	keybd_event(asi,0,0,0);
   	keybd_event(asi,0,KEYEVENTF_KEYUP,0);
   	Sleep(100);
	} 
	/*�����Ӧ��
	���ּ���:
	0~9  -->  96~105
	*              -->  106 
	+              -->  107
	Enter          -->  108
	-              -->  109 
	.              -->  110 
	/              -->  111
	�����̣� 
	0~9            -->  48~57 
	A~Z            -->  65~90 
	F1~F2          -->  112~123
	Tab            -->  9
	Enter          -->  13
	 
    �����ѯhttps://www.cnblogs.com/lxwphp/p/9548823.html
 	
	*/ 
int main()
{
	POINT P;
	int x=GetSystemMetrics(SM_CXSCREEN);
	int y=GetSystemMetrics(SM_CYSCREEN);
	while(1)
	{
		//GetCursorPos(&P);
		//printf("%d %d    \r",P.x,P.y);//��ȡ���λ�� 
	//	SetCursorPos(rand()%x,rand()%y);//���������� 
	
		

		 
	//	leftclick();
	//	rightclick();
	//	middleclick();
	//	leftdoubleclick();
		press(69);
		//����ָ������ֹ���� 
		if(KEY_DOWN('0'))//��0ֹͣ 
		{
			return 0;
		}
	}
}

