#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp[3];
	char str[20]={'\0'},name1[10]={'\0'},name2[10]={'\0'};
	int i;
	char s1[]="f1f1f1f1",s2[]="f2f2f2f2";
	fp[0]=fopen("t1.txt","w+");	//�Ѵ����ļ�1
	fputs(s1,fp[0]);	//�Ѵ����ļ�������1
	fp[1]=fopen("t2.txt","w+");	//�Ѵ����ļ�2
	fputs(s2,fp[1]);	//�Ѵ����ļ�������2
	fclose(fp[0]);
	fclose(fp[1]);

	fp[0]=fopen("t1.txt","r");	//�Ѵ����ļ�1
	fp[1]=fopen("t2.txt","r");	//�Ѵ����ļ�2

	gets(name1);
	i=name1[1]-49;
	fgets(str,8,fp[i]);
	gets(name2);
	fp[2]=fopen(name2,"w+");
	puts(str);
	fputs(str,fp[2]);
	fclose(fp[0]);
	fclose(fp[1]);
	fclose(fp[2]);
}