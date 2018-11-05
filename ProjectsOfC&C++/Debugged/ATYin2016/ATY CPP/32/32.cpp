#include <iostream>
using namespace std ;





int Maxl(int a,int b);
int Maxl(int a,int b,int c);
double Maxl(double d,double e);
double Maxl(double d,double e,double f);
int main()
{int a,b,c,max0;
double d,e,f,max1;
cout<<"请输入两个整数:";
cin>>a>>b;
max0=Maxl(a,b);
cout<<"最大值为:"<<max0<<endl;
cout<<"请输入三个整数:";
cin>>a>>b>>c;
max0=Maxl(a,b,c);
cout<<"最大值为:"<<max0<<endl;
cout<<"请输入两个双精度数:";
cin>>d>>e;
max1=Maxl(d,e);
cout<<"最大值为:"<<max1<<endl;
cout<<"请输入三个双精度数:";
cin>>d>>e>>f;
max1=Maxl(d,e,f);
cout<<"最大值为:"<<max1<<endl;

}


int Maxl(int a,int b)
{int max;
if (a>b)
	max=a;
else
	max=b;
return max;
}

int Maxl(int a,int b,int c)
{int max;
if (a>b)
	max=a;
else
	max=b;
if (c>max)
	max=c;
return max;
}

double Maxl(double d,double e)
{double max;
if (d>e)
	max=d;
else
	max=e;
return max;
}

double Maxl(double d,double e,double f)
{double max;
if (d>e)
	max=d;
else
	max=e;
if (f>max)
	max=f;
return max;
}
