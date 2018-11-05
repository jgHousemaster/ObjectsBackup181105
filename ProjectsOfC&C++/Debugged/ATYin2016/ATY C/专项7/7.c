#include <stdio.h>

void main()
{
	int n,a[100]={0},i,j,k=1,h;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=5;
	i=0;
	while(1)
	{
		h=0;
		if(a[i]!=0)
		{
			a[i]=k;
			k++;
			if(k==3)
				k=0;
		}
		i++;
		if(i==n)
			i=0;
		for(j=0;j<n;j++)
			if(a[j]==0)
				h++;
		if(h+1==n)
			break;
	}

	for(i=0;i<n;i++)
		if(a[i]!=0)
			printf("%d\n",i+1);
}