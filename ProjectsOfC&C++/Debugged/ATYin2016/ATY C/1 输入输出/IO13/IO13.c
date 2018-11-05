#include <stdio.h>
void main()
{
int a,b;
printf("Please input a and b:");
scanf("%2d%*2d%2d",&a,&b);
printf("a=%d,b=%d,a+b=%d\n",a,b,a+b);
}