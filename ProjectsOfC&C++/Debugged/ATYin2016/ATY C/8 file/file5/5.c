#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char str[20]={'\0'};
	int i;
	char s1[]="filefilefile";
	fp=fopen("t1.txt","w+");	//已存在文件
	fputs(s1,fp);	//已存在文件的内容
	fclose(fp);

	fp=fopen("t1.txt","r");	//已存在文件
	fgets(str,20,fp);
	puts(str);
	fclose(fp);
}