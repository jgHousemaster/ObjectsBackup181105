#include <stdio.h>
void main()
{int i;
int a,b,c,d,e;
for(i=6;i<10000;i++)
	{a=(i-1);
	b=(i-a-2);
	c=(i-a-b-3);
	d=(i-a-b-c-4);
	e=(i-a-b-c-d-5);
	if(a%5==0&&b%5==0&c%5==0&&d%5==0)
		printf("%d\n",i);}
}
