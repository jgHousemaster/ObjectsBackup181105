#include <stdio.h>

void main()
{
	int c,d;
	int *a=&c,*b=&d;
	scanf("%d %d",&c,&d);
	if(c<d)
		printf("%d %d\n",*a,*b);
	else 
		printf("%d %d\n",*b,*a);
}