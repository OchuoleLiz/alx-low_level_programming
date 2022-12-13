#include <stdio.h>

int main(void)
{
	int y;
	int z;

	y = 0;
	z = 1;

	while (y < 9)
	{
		while (z <= 9)
		{
			putchar(y + '0');
			putchar(z + '0');
			
			if (y == 8 & z == 9)
				putchar('\n');
			else
			{
				putchar(',');																putchar(' ');
			}
			z++;
		}
		y++;
		y = z + 1;
	}
	return (0);
}

