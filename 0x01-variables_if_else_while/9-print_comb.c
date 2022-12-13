#include <stdio.h>

int main(void)
{
	int n;
	int m;

	n = 0;
	m = 1;

	while (n < 9)
	{
		while (m < 9)
		{
			putchar(n + '0');
			putchar(m + '0');

			if (x == 8 & y == 9)
				putchar('\n');
			else 
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	return (0);
}
