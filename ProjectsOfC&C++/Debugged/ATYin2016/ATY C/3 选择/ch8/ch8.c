#include <stdio.h>
void main()
{int q=0,b=0,s=0,g=0,zo;
printf("Please input 4 number:");
scanf("%d",&zo);
q=zo/1000;
b=(zo-1000*q)/100;
s=(zo-1000*q-100*b)/10;
g=zo%10;
q=(q+5)%10;
b=(b+5)%10;
s=(s+5)%10;
g=(g+5)%10;
printf("Your phone number is:%d%d%d%d\n",g,s,b,q);
}