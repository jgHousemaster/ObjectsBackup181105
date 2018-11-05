#include <iostream.h>
#include <string.h>

class string
{
private:
	char s1,s2;
public:
	string(){}
	~string(){}
	char gstr1in()
		{cout<<"Please input your string1:";
		cin>>s1;
		return s1;}
	char gstr2in()
		{cout<<"Please input your string2:";
		cin>>s2;
		return s2;}
	void pstrout(int n)
		{cout<<"The string after link:"<<s1<<endl;}
};


void link()
{string str1[100]={'\0'};
string str2[40]={'\0'};
int i,n;
str1[100].gstr1in();
str2[40].gstr2in();
n=strlen(str1[100].gstr1in);
for(i=0;i<n;i++)
	str1[n+i].gstr1in()=str2[i].gstr2in();
str1[100].pstrout(n,str1[100].pstrout);
}



main()
{
	link();
}