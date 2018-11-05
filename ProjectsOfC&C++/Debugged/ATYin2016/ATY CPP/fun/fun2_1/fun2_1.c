#include <stdio.h>
#include <string.h>

void replace(char*s,char c1,char c2)
{
	int n,i,j,k;
	printf("原字符串为:");
	puts(s);
	n=strlen(s);
	for(i=0;i<n;i++)
		if(s[i]==c1)
			s[i]=c2;
	printf("转换后的字符串为:");
	puts(s);
}

main()
{
	char s1[100],c11,c22;
	int i;
	printf("请输入字符串:");
	gets(s1);
	printf("请输入c1和c2(以空格隔开):");
	scanf("%c %c",&c11,&c22);
	replace(s1,c11,c22);
}