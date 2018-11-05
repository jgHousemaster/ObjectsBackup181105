#include <iostream>
using namespace std;

#define DELAY 800000000

void PW()
{
	char PASSWORD_A[9]={'1','1','1','1','1','1','1','1','\0'},PASSWORD_B[9]={'\0'};
	cout<<"\n\n\t\t\t Please input your password:";
	cin>>PASSWORD_B;
	if(strcmp(PASSWORD_A,PASSWORD_B)==0)
//		Menu.MenuIn();
		cout<<"\n\n\t\t\t   Welcome Professor!\n\n";
	else
	{
		cout<<"\n\n\n\t\t\t   Wrong Password!\n\t\t\t   Plaese input again!"<<endl;
		for(int i=0;i<DELAY;i++){}
		system("cls");
		PW();
	}
}

int main()
{
	PW();
	return 0;
}

