#include <stdio.h>

int main(void)
{
	int n;

	n = 0

	while (n <= 9)
	{
		putchar(n + '0');

		if (n == 9)
			putchar('\n');
		n++
	}

	return(0);
}
