#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp[2];
	char str[20]={'\0'},name1[10]={'\0'},name2[10]={'\0'};
	int i;
	char s1[]="filefilefile";
	fp[0]=fopen("t1.txt","w+");	//已存在文件
	fputs(s1,fp[0]);	//已存在文件的内容
	fclose(fp[0]);

	fp[0]=fopen("t1.txt","r");	//已存在文件
	scanf("copy %s",name1);	//输入第一个文件名后回车输入第二个文件名
	scanf("%s",name2);
	fgets(str,20,fp[0]);
	fp[1]=fopen(name2,"w+");
	puts(str);
	fputs(str,fp[1]);
	fclose(fp[0]);
	fclose(fp[1]);
}