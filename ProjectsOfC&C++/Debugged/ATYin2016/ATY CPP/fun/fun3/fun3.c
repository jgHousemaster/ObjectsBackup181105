#include "time.h"
#include "stdlib.h"
#include "stdio.h"
void main()
{
	char c;
	clock_t start,end;
	time_t a,b;
	double var;
	int i,guess;
	srand(time(NULL));
	printf("Do you want to play it.('y'or'n')\n");
	loop:
	while((c=getchar())=='y')
	{
		i=rand()%100;
		printf("\nPlease input number you guess:\n");
		start=clock();
		a=time(NULL);
		scanf("%d",&guess);
		while(guess!=i)
		{
			if(guess>i)
			{
				printf("Please input a little smaller.\n");
				scanf("%d",&guess);
			}
			else
			{
				printf("Please input a little bigger.\n");
				scanf("%d",&guess);
			}
		}
		end=clock();
		b=time(NULL);
		printf("\lIt took you %6.3f seconds.\n",var=(double)(end-start)/1000);
		printf("\lIt took you %6.3f seconds.\n\n",difftime(b,a));
		if(var<15)
			printf("\l\lYou are very clever!\l\l\n\n");
		else if(var<25)
			printf("\l\lYou are normal!\l\l\n\n");
		else 
			printf("\l\lYou are stupid!\l\l\n\n");
		printf("\l\lCongradulations!\l\l\n\n");
		printf("The number you guess is %d",i);
	}
	printf("\nDo you want to try it again?(\"y\".or.\"n\")\n");
	if((c=getchar())=='y')
		goto loop;
}