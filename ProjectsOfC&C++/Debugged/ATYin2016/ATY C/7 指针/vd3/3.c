#include <stdio.h>
#include <string.h>

void main()
{
	char str1[50],str[5];
	char *a=str1,*b=str;
	int n,i,j,k;
	int judg;
	n=0;
	gets(str1);
	gets(str);
	for(i=0;i<strlen(str1)-strlen(str)+1;i++)
	{
		judg=1;
		k=i;
		for(j=0;j<strlen(str);j++,k++)
		{
			if(*(a+j)!=*(b+k))
			{
				judg=0;
				break;
			}
		}
		if(judg==1)
			n++;
	}
	printf("%d\n",n);
}