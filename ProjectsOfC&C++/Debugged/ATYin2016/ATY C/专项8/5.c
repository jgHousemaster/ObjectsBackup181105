#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	char str[20]={'\0'};
	int i;
	char s1[]="filefilefile";
	fp=fopen("t1.txt","w+");	//�Ѵ����ļ�
	fputs(s1,fp);	//�Ѵ����ļ�������
	fclose(fp);

	fp=fopen("t1.txt","r");	//�Ѵ����ļ�
	fgets(str,20,fp);
	puts(str);
	fclose(fp);
}