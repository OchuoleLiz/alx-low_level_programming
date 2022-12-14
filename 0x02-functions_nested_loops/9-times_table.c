#include "main.h"

void times_table(void)
{
	int y, z, multi_value;

	for (z = 0; z < 10; z++)
	{
		for (y = 0; y < 10; y++)
		{
			multi_value = x * y;
			if (y == 0)
				_putchar(multi_value + '0');
			else if (multi_value >= 10)
			{
				_putchar(' ');
				_putchar(multi_value / 10 + '0');
				_putchar(multi_value % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');									_putchar(multi_value + '0');
			}

			if (y != 9)
				_putchar(',');

		}
		_putchar('\n')
	}
}
