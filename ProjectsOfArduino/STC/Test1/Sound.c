#include <reg52.h>

sbit BEEP=P3^0;

void main()
{
	int i,j;
	for(i=0;i<100;i++)
	{
		//for(j=0;j<20;j++)
			BEEP=~BEEP;
		for(j=0;j<250;j++);
		//for(j=0;j<20;j++)
//			BEEP=0;
//		for(j=0;j<200;j++);
	}
	BEEP=1;
}
