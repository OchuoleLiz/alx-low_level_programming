#include <stdio.h>

int main(void)
{
	int n;
	char a;

	n = 0;
	a = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (a <= 'f')
	{
		putchar(a);
		
		if (a == 'f')
			putchar('\n');
		a++;
	}
	
	return (0);
}

