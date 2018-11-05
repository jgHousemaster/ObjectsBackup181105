#include <iostream.h>
#include "65.h"

void Employee::display(int n)
	{if(n==0)
		cout<<"Before change name"<<endl<<"Name:"<<name<<endl<<"Adress:"<<address<<endl<<"City:"<<city<<endl<<"Adressnumber:"<<adnumber<<endl;
	else 
		cout<<"After change name"<<endl<<"Name:"<<name0<<endl<<"Adress:"<<address<<endl<<"City:"<<city<<endl<<"Adressnumber:"<<adnumber<<endl;
	}


main()
{
	char nm[10];
	Employee a;
	a.get("Shield","Unknow","Newyork",007);
	a.display(0);
	cin>>nm;
	a.change_name(nm);
	a.display(1);
}