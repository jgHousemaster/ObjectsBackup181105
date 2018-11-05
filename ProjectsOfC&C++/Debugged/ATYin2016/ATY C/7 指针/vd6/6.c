#include <stdio.h>

void fun(int *a,int n,int *odd,int *even)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(a+i)%2==0)
			(*even)+=*(a+i);
		else
			(*odd)+=*(a+i);
	}
}

void main()
{
	int str[20];
	int n1=0,od=0,ev=0;
	int i;
	int *s=str,*odd=&od,*even=&ev;
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
		scanf("%d",&str[i]);
	fun(s,n1,odd,even);
	printf("odd:%d\n",*odd);
	printf("even:%d\n",*even);
}