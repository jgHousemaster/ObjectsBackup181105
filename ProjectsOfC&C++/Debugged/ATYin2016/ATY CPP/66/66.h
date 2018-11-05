#include <iostream.h>
#include <string.h>

class Employee
{
private:
	char name[10],name0[10],address[10],city[10];
	int adnumber;
public:
	Employee(){}
	void get(char name1[],char address1[],char city1[],int adnumber1)
		{strcpy(name,name1);
		strcpy(address,address1);
		strcpy(city,city1);
		adnumber=adnumber1;
		}
	void change_name(char name2[])
		{strcpy(name0,name2);}
	void display(int n);
};
