#include <stdio.h>

void sort(int *x,int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(x[i]<=x[j])
				{t=x[i];
				x[i]=x[j];
				x[j]=t;}
	for(i=0;i<n;i++)
		printf("%d ",x[i]);
	printf("\n");
}

main()
{
	int a[100],i,n1;
	printf("�����������С:");
	scanf("%d",&n1);
	printf("������N������:");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	sort(a,n1);
}