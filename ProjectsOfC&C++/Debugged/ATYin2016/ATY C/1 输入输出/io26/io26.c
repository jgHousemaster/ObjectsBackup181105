#include <stdio.h>
void main()
{int a[50][10];
int i=0,j=0,o=0,max=0;
while (a[j][0]!=0)
	{j++;
	scanf("%d",&a[j][0]);
	for (i=0;i<a[j][0];i++)
		{scanf("%d",&a[j][i]);
		for (o=0;o<a[j][0];o++)
			max+=a[j][o];
}
}