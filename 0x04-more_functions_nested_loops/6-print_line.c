#include "main.h"

/**
 * print_line - Print '_' n times
 * @n: number of times '_' is printed in int
 *
 */
void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
