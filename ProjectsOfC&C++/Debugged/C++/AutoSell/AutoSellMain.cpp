#include <iostream>
using namespace std;
#include "AutoSell.h"

int main()
{
	int CH;
	Menu menuW;
	for(int i=0;;i++)				//��while(1)Ҳ���ԣ���ϵͳ�Լ�ѭ�����˳�
	{
		menuW.MenuWHOLE();
		cin>>CH;
		if(CH!=0)
			menuW.SWITCH(CH);
		else
			break;
	}
	return 0;
}
