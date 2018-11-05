#include <stdio.h>

void sl(char *s)
{
	int i,n=0;
	char str[100];
	for(i=0;;i++)
	{
		if(*(s+i)=='\0')
			break;
		else 
			n++;
	}
	printf("%d\n",n);
}

void main()
{
	char st[100];
	char *ss=st;
	gets(st);
	sl(ss);
}