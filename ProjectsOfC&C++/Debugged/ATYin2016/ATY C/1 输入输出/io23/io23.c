#include <stdio.h>
void main()
{int mm,dd,yy;
printf("请按“月/日/年”的格式输入:");
scanf("%d/%d/%d",&mm,&dd,&yy);
printf("%d年%d月%d日\n",yy,mm,dd);
}