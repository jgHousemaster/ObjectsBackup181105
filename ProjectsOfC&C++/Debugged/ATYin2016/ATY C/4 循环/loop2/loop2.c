#include <stdio.h>
#include <string.h>
void main()
{int i,j,n,b;
char m[100]={'\0'},a[100]={'\0'},c[100]={'\0'};
printf("������һ������:");
//for(i=0;i<100;i++)
	scanf("%s",a);
n=strlen(a);
for(i=0;i<10;i++)
printf(" %c ",a[i]);
printf("%d",n);
for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		if(a[i]>a[j])
			m[i]=a[i];
		else
			m[i]=a[j];}
printf("�ɴ�С����������Ϊ:");
for(i=0;i<n;i++)
	printf("%d ",m[i]);}