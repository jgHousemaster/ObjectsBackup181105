#include <stdio.h>
#include <string.h>

void replace(char*s,char c1,char c2)
{
	int n,i,j,k;
	printf("ԭ�ַ���Ϊ:");
	puts(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]==c1)
			s[i]=c2;
	printf("ת������ַ���Ϊ:");
	puts(s);
}

main()
{
	char s1[100],c11,c22;
	int i;
	printf("�������ַ���:");
	gets(s1);
	printf("������c1��c2(�Կո����):");
	scanf("%c %c",&c11,&c22);
	replace(s1,c11,c22);
}