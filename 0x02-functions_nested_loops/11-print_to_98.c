#include "main.h"
#include <stdio.h>

void print_to_98(void)
{
	int m = 0;

	if(n < 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m != n)
				printf(", ");

			printf("%d",m);
		}
	}
	else
	{
		for (m = n; m <= 98; m++)
		{
			if (m != n)
				printf(",");

			printf("%d", m);
		}
	}
	
	putchar('\n');
}

