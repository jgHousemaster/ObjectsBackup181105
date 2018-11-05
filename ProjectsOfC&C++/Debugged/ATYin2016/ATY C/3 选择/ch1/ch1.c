#include <stdio.h>
main ()
{int g,s,b,zo;
for (zo=100;zo<1000;zo++)
	{b=zo/100;
	s=(zo-b*100)/10;
	g=zo%10;
	if (zo==b*b*b+s*s*s+g*g*g)
		printf("%d\n",zo);}
}
