#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp[2];
	char str[20]={'\0'},name1[10]={'\0'},name2[10]={'\0'};
	int i;
	char s1[]="filefilefile";
	fp[0]=fopen("t1.txt","w+");	//�Ѵ����ļ�
	fputs(s1,fp[0]);	//�Ѵ����ļ�������
	fclose(fp[0]);

	fp[0]=fopen("t1.txt","r");	//�Ѵ����ļ�
	scanf("copy %s",name1);	//�����һ���ļ�����س�����ڶ����ļ���
	scanf("%s",name2);
	fgets(str,20,fp[0]);
	fp[1]=fopen(name2,"w+");
	puts(str);
	fputs(str,fp[1]);
	fclose(fp[0]);
	fclose(fp[1]);
}