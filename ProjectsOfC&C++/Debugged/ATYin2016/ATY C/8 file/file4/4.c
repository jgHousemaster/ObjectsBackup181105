#include <stdio.h>
#include <stdlib.h>

void main()
{

	FILE *fp;
	char str[50]={'\0'};
	int i;
	fp=fopen("t4.txt","w+");
	for(i=0;;i++)
	{	
		str[i]=getchar();
		fputc(str[i],fp);
		if(str[i]=='0')	//��0Ϊ������־
			break;
	}
	puts(str);
	fclose(fp);
}