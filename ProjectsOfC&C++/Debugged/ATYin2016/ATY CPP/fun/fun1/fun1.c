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
	printf("请输入数组大小:");
	scanf("%d",&n1);
	printf("请输入N个整数:");
	for(i=0;i<n1;i++)
		scanf("%d",&a[i]);
	sort(a,n1);
}