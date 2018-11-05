#include <stdio.h>
void main()
{int dob,s1=0,s2=0,i,p;
printf("请输入一个偶数:");
scanf("%d",&dob);
//if(dob==2)
//	printf("2=1+1\n");
for(s1=1,p=0;s1<dob;s1++)
	{printf("%d\n",s1);
	s2=dob-s1;
	for(i=1;i<dob;i++)
		{if(s1%i==0)
			{if(s1==i)
				{if(s2%i==0)
					{if(s2==i)
						p=1;
		}}}}
	if(p)
	printf("%d=%d+%d\n",dob,s1,s2);

	}

}