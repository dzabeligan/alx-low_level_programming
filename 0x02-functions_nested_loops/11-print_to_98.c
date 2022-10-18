#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print from number to 98
 * @n: Integer
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("%d\n", n);
}
