#include <stdio.h>

int main(void)
{
	char a;

	a = 'z';

	while (a <= 'a')
	{
		putchar(a);
		
		if (a == 'a')
			putchar('\n');

		a--;
	}

	return(0);
}

