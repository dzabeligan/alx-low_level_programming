#include "main.h"

/**
 * print_square - Print '#' `size x size`
 * @size: size of square in int
 *
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		int j = 0;

		for (j = 0; j < size; j++)
			_putchar('#');
	    _putchar('\n');
	}
}
