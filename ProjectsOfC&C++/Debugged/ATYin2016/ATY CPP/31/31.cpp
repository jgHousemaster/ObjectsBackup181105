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
cout<<"�����뻪���¶�:";
cin>>f1;
c1=Convert(f1);
cout<<"��Ӧ�������¶�Ϊ:"<<c1<<endl;
}