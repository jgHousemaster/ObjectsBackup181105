#include <stdio.h>

int div(int n,int m)
{if (n/5==0||n%5!=1)
	{return 0;}
if (m==1)
	{return 1;}
	return div(n-n/5-1,m-1);
}

void main()
{int n;
for (n=6;;n++)
	{if(div(n,5))
		{printf("原来最少有%d个桃子。\n",n);
		break;}}
}