#include <stdio.h>

void swap(int *a,int *b)
{
	int *t;
	t=a;a=b;b=t;
	printf("%d %d\n",*a,*b);
}
void main()
{
	int i,j;
	int *c=&i,*d=&j;
	scanf("%d %d",&i,&j);
	swap(c,d);
}
