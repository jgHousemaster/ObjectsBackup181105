#include <stdio.h>

void doing()
{
	char x[50]={'\0'};
	int i;
	printf("ÇëÊäÈëÎå¸ö×Ö·û:");
	for(i=0;i<5;i++)
		scanf("%c",&x[i]);
	for(i=4;i>=0;i--)
		printf("%c ",x[i]);
	printf("\n");
}

main()
{
	doing();
}

/*void doing(char x[])
{
	int i=0;
	if(x[i]!='\0')
		{
			doing(&x[i+1]);
			printf("%c",&x[i]);
		}
	else return;
}

void main()
{char a[50];
gets(a);
doing(a);
}*/