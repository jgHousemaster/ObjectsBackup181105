#include <stdio.h>
void main()
{int a,a1=0,n1=0,i,i1=0,b=0,n2=0;

for (a=2;a<=3000;a++)
	{for(i=1;i<a;i++)
		{if(a%i==0)
			b=b+i;
		}
//	printf("%d\n",b);
//for (b=2;b<=3000;b++)
	for(i=1;i<b;i++)
			{if(b%i==0)
				n2=n2+i;
			}
//	printf("aasd%d\n",n);
	if(a==n2)
		printf("%d..%d\n",a,b);
	b=0;
	n2=0;
	}
}
