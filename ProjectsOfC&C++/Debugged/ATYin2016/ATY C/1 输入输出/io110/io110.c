#include <stdio.h>
int main(void)
{int c;
c=getchar();
while(c!=EOF)
{
/*for (c=getchar();c!=EOF;c=getchar())
	{c=getchar();
	if (c==EOF)
			break;*/
	if ((c>='a')&&(c<='z'))
		c+='A'-'a';
		putchar(c);c=getchar();
	}
return 0;
}