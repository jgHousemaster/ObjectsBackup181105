#include <iostream>
using namespace std ;


float Convert(float f)
{float c,a;
c=(f-32)*5/9;
return c;
}

float Convert(float f);
void main()
{float c1,f1;
cout<<"请输入华氏温度:";
cin>>f1;
c1=Convert(f1);
cout<<"对应的摄氏温度为:"<<c1<<endl;
}