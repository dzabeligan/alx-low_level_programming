#include "main.h"

/**
 * times_table - Print multiplication 0 - 9
 *
 */
void times_table(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if ((product || j) && product < 10)
				_putchar(' ');
			else if (product >= 10)
				_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
