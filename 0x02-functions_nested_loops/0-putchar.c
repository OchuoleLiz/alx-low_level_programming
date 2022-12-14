#include "main.h"

int main(void)
{
	char a[10] = "_putchar";
	int b;

	b = 0;
	while (a[b])
	{
		_putchar(a[b]);
		b++;
	}
	_putchar('\n');

	return (0);
}
