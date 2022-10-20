#include "main.h"

/**
 * more_numbers - print numbers, from '0' to '14' ten times
 *
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		int c = 0;

		while (c <= 14)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
	}
}
