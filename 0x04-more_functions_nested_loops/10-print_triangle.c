#include "main.h"

/**
 * print_triangle - Print triangle using '#'
 * @size: size of triangle in int
 *
 */
void print_triangle(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		int num_spaces = size - i - 1;
		int strip_len = i + 1;

		while (num_spaces--)
			_putchar(' ');

		while (strip_len--)
			_putchar('#');
	    _putchar('\n');
	}
}
