#include <stdio.h>
#include <math.h>
#include <string.h>

#define N 5
int per[N];

void input()
{
	int i;
	printf("请输入%d位同学的成绩:",N);
	for(i=0;i<N;i++)
		scanf("%d",&per[i]);
}

void count(int p[N])
{
	int i,j;
	char sym=37;
	int q9=0,q8=0,q7=0,q6=0,q0=0;
	float q=0;
	for(i=0;i<N;i++)
		{if(p[i]>=90&&p[i]<=100)
			q9++;
		else if(p[i]>=80&&p[i]<90)
			q8++;
		else if(p[i]>=70&&p[i]<80)
			q7++;
		else if(p[i]>=60&&p[i]<70)
			q6++;
		else if(p[i]>=0&&p[i]<60)
			q0++;}
	q=N-q0;
	printf("0到60分的人数有:%d\n60到70分的人数有:%d\n70到80分的人数有:%d\n80到90分的人数有:%d\n90到100分的人数有:%d\n",q0,q6,q7,q8,q9);
	printf("及格率为:%.2f%c\n",(q/N)*100,sym);
}

void avmaxmin(int pp[N])
{
	int i,j,pl=0,av=0,max=0,min=100;
	for(i=0;i<N;i++)
		pl+=pp[i];
	av=pl/N;
	for(i=0;i<N;i++)
		if(max<=pp[i])
			max=pp[i];
	for(i=0;i<N;i++)
		if(min>=pp[i])
			min=pp[i];
	printf("平均分为:%d\n最高分为:%d\n最低分为:%d\n",av,max,min);
}

main()
{
	input();
	printf("%d %d %d %d %d\n",per[0],per[1],per[2],per[3],per[4]);
	count(per);
	avmaxmin(per);
}