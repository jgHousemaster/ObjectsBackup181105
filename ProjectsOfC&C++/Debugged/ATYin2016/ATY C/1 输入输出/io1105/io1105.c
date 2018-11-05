#include <stdio.h>
#include <ctype.h>
int main(void)
{int c;
for (;;)
	{c=getchar();
	if (c==EOF) break;
	if (islower(c))
		c=toupper(c);
	putchar(c);
	}
return 0;
}