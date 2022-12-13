#include <stdio.h>

int main()
{
	char a;

	while (a <= 'z')
	{
		if (a == 'e' | a == 'q')
			continue;
	getchar(a);
	a++;
	getchar("\n");
	}

	return 0;
}

