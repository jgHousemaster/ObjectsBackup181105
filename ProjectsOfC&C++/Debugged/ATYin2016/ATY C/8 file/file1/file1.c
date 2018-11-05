#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
//	fp=fopen("f1.txt","w+");
	char str[20];
	int i,n;
	if((fp=fopen("f1.txt","w+"))==NULL)
	{
		printf("\nCan not open this file!\n");
		exit(0);
	}
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
		str[i]=str[i]-32;
	fputs(str,fp);
	puts(str);
	fclose(fp);
}