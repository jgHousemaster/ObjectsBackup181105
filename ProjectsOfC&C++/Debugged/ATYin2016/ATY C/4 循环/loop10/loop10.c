#include <stdio.h>
void main()
{int zo,zo1,wu,er,yi;
int i,j,k=0;
printf("请输入要兑换的钱数(>10元):");
scanf("%d",&zo);
for(i=1;;i++)
	{if((zo-5*i)<=0)
		break;
	for(j=1;;j++)
		{if((zo-5-2*j)<=0)
			break;
		if(zo-(5*i)-(2*j)>=1)
			k++;
		}
	}
printf("共有%d种方法\n",k);
}