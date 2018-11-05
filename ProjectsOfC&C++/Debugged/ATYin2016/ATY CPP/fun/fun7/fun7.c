#include <stdio.h>

int a[20]={0};

void f1()
{
	int i,j,t=0;
	for(i=0;i<20;i++)
		{
			t=t+2;
			a[i]=t;
		}
	for(i=0;i<4;i++)
		{for(j=0;j<5;j++)
			printf("%02d ",a[i*5+j]);
		printf("\n");}
}

void f2()
{
	int i,j,b2[4]={0};
	for(i=0;i<4;i++)
		{for(j=0;j<5;j++)
			b2[i]=b2[i]+a[i*5+j];}
	printf("平均值为:");
	for(i=0;i<4;i++)
		printf("%d ",b2[i]/5);
	printf("\n");
}

void main()
{
	f1();
	f2();
}