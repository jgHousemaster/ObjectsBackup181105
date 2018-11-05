#include <stdio.h>
void main()
{char a[10],b[10],c[10];
char max[10];
int i;
printf("请输入三个字符串:\n");
scanf("%s",&a);
scanf("%s",&b);
scanf("%s",&c);
if (strcmp(a,b)>=0)
	strcpy(max,a);
else strcpy(max,b);
if (strcmp(c,max)>0)
	strcpy(max,c);
printf("最大的字符串为:%s\n",max);
}