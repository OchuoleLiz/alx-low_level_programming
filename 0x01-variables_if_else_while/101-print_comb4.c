#include <stdio.h>

int main(void)
{
	int n;
	int m;
	int o;

	n = 0;
	m = 1;
	o = 2;

	while (n < 8)
	{
		while (m < 9)
		{
			while (o < 9)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(o + '0');
				if (n == 7 & m == 8 & o == 9)
					putchar('\n');
				else
				{
					putchar(',');
					putchar(' ');
				}
				o++;
			}
			m++;
			o = m + 1;

		}
		n++;
		m = n + 1;
		o = n + 2;
	}
	return (0);
}

