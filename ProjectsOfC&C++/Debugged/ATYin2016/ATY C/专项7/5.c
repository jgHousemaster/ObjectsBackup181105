#include <stdio.h>

void cop(char *s1,char *s2)
{
	int i,n;
	n=strlen(s1);
	for(i=0;i<n;i++)
		*(s2+i)=*(s1+i);
	puts(s2);
}

void main()
{
	char str1[20]={'\0'},str2[20]={'\0'};
	char *ss1=str1,*ss2=str2;
	printf("str1:");
	gets(str1);
	printf("str2:");
	cop(ss1,ss2);
}