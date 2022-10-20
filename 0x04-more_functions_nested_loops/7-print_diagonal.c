#include "main.h"

/**
 * print_diagonal - Print '\' n times
 * @n: number of times '\' is printed in int
 *
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		int num_spaces = i;

		while (num_spaces--)
		{
			_putchar(' ');
		}

		_putchar('\\');
	    _putchar('\n');
	}
}
