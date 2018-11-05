#include <iostream>
using namespace std;
#include "AutoSell.h"

int main()
{
	int CH;
	Menu menuW;
	for(int i=0;;i++)				//用while(1)也可以，让系统自己循环不退出
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
