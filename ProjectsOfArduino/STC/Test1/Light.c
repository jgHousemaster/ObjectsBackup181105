#include <reg52.h>

sbit BEEP=P3^0;

void delay()
{
	int i,j;
	for(i=0;i<200;i++)
		for(j=0;j<200;j++);
}

void main()
{
	int i;
	for(i=0;i<200;i++)
	{
		BEEP=1;
		delay();
		BEEP=0;
		delay();
	}
}

