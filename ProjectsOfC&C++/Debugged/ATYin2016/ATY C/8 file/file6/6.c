#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp[4];
	char str[20]={'\0'},name1[10]={'\0'},name2[10]={'\0'};
	int i;
	char s1[]="f1f1f1f1",s2[]="f2f2f2f2",s3[]="f3f3f3f3";
	fp[0]=fopen("t1.txt","w+");	//已存在文件1
	fputs(s1,fp[0]);	//已存在文件的内容1
	fp[1]=fopen("t2.txt","w+");	//已存在文件2
	fputs(s2,fp[1]);	//已存在文件的内容2
	fp[2]=fopen("t3.txt","w+");	//已存在文件3
	fputs(s3,fp[2]);	//已存在文件的内容3
	fclose(fp[0]);
	fclose(fp[1]);
	fclose(fp[2]);

	fp[0]=fopen("t1.txt","r");	//已存在文件1
	fp[1]=fopen("t2.txt","r");	//已存在文件2
	fp[2]=fopen("t3.txt","r");	//已存在文件3

	gets(name1);
	i=name1[1]-49;
	fgets(str,10,fp[i]);
	gets(name2);
	fp[3]=fopen(name2,"a+");
	fputs(str,fp[3]);
	printf("Finished!\n");
	fclose(fp[0]);
	fclose(fp[1]);
	fclose(fp[2]);
	fclose(fp[3]);
}