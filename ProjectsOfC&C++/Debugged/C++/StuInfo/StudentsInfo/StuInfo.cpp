#include <iostream>
using namespace std;
#include "InfoMenu.h"



void PW()
{
	InfoMenu Menu;
	char PASSWORD_A[16]={'1','1','1','1','1','1','1','1','\0'},PASSWORD_B[16]={'\0'};
	cout<<"\n\n\t\t\t   ��ӭʹ��AXѧ���ɼ�����ϵͳ.\n\n\t\t\t   ����������:";
	gets_s(PASSWORD_B);
	if(strcmp(PASSWORD_A,PASSWORD_B)==0)
	{
		system("cls");
		Menu.MENUIn();
	}
	else
	{
		cout<<"\n\n\n\t\t\t   �������!\n\t\t\t   ����������!"<<endl;
		for(int i=0;i<DELAY;i++){}
		system("cls");
		PW();
	}
}

int main()
{
	PW();
//	Menu.CHOISEIn();
	return 0;
}