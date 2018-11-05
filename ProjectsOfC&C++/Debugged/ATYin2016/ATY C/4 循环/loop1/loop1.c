#include <stdio.h>
void main()
{int i,chg;
char o[10]={0};
printf("请输入要转换的十进制数:");
scanf("%d",&i);
printf("请输入要转换的进制数:");
scanf("%d",&chg);
strcpy(o,chgs(i,chg));
for (i=0;i<10;i++)
	printf("%d",o[i]);
}

int chgs(int in1,int chg1)
{int out1[10]={0},i;
while (in1!=0)
	{for (i=0;i<10;i++)
		out1[i]=in1%chg1;
		in1=in1/chg1;
	}
return out1;
}