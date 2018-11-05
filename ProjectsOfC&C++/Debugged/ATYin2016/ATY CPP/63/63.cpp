#include <iostream.h>
#include <string.h>

void link()
{char str1[100]={'\0'},str2[40]={'\0'};
int i,j,k,n;
cout<<"Please input your string1:";
cin>>str1;
cout<<"Please input your string2:";
cin>>str2;
n=strlen(str1);
for(i=0;i<n;i++)
	str1[n+i]=str2[i];
cout<<"The string after link:"<<str1<<endl;
}



main()
{
	link();
}