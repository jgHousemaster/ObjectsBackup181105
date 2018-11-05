#include <stdio.h>
void main()
{int zo,b,s,g,i=0;
for(b=1;b<=4;b++)
	{for(s=1;s<=4;s++)
		{if(s!=b)
			{for(g=1;g<=4;g++)
				{if(g!=s&&g!=b)
					{printf("%d%d%d\n",b,s,g);
					i++;}
				}
			}
		}
	}
printf("共%d个三位数\n",i);
}
