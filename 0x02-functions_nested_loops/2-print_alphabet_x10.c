#include "main.h"

void print_alphabet_x10(void)
{
	char x;
	int b = 1;

	while (b <= 10)
	{
		x = 'a';
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}

		_putchar('\n');
		x++;
	}
	return (0);
}

