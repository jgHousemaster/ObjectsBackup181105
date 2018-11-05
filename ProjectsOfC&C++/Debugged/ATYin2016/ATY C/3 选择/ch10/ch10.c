#include <stdio.h>

int hj(int y,int x,int ch)
{int i;
for(i=1;i<y;i++)
	{if(y%i==0&&x%i==0)
		{y=y/i;
		x=x/i;}
	}
switch(ch)
{case 1:printf("%d/%d\n",y,x);
case 2:printf("%d/%d\n",y,x);
case 3:printf("%d/%d\n",y,x);
case 4:printf("%d/%d\n",y,x);}
}

void main()
{int a,b,d,c;
int y,x,i,j;
printf("请分别输入分子/分母(两分数间以空格隔开):");
scanf("%d/%d %d/%d",&b,&a,&d,&c);

/*for(i=0;i<10;i++)
	{for(j=0;j<10;j++)
		{if(a*i==c*j)
			{b=b*i;
			a=a*i;
			d=d*j;
			c=c*j;
			y=b+d;
			x=a;
			hj(y,x,1);
			break;}
		break;
		}
	}
}
for(i=0;;i++)
	{for(j=0;;j++)
		{if(a*i==c*j)
			{b=b*i;
			a=a*i;
			d=d*j;
			c=c*j;
			y=b-d;
			x=a;
			hj(y,x,2);
			break;}
		break;
		}
	}
*/
{y=b*d;
x=a*c;
printf("%d/%d*%d/%d=",b,a,d,c);
hj(y,x,3);}

{y=b*c;
x=a*d;
printf("%d/%d/%d/%d=",b,a,d,c);
hj(y,x,4);}

}
