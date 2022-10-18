#include "main.h"

/**
 * print_times_table - Print multiplication from 0 - n
 * print nothing if n is less than 0 or greater than 15
 * @n: Integer
 *
 */
void print_times_table(int n)
{
	int i = 0;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		int j = 0;

		for (j = 0; j <= n; j++)
		{
			int product = i * j;

			if ((product || j) && product < 100)
				_putchar(' ');
			else if (product >= 100)
				_putchar(product / 100 + '0');

			if ((product || j) && product < 10)
				_putchar(' ');
			else if (product >= 100)
				_putchar((product % 100) / 10 + '0');
			else if (product >= 10)
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
