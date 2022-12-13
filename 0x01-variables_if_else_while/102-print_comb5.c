#include <stdio.h>

int main(void)
{
	int y;
	int z;

	y = 0;

	while (y < 99)
	{
		z = y + 1;
		while (z <= 99)
		{
			putchar((y / 10) + '0');
			putchar((y % 10) + '0');
			putchar(' ');
			putchar((z / 10) + '0');
			putchar((z % 10) + '0');
			
			if (y == 98 & z == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		y++;
	}
	return (0);
}
