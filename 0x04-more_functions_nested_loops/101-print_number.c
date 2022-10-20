#include "main.h"

/**
  * print_number - Prints number using `_putchar`
  * @n: int number to print
  *
  */
void print_number(int n)
{
	int last_digit = 0;
	int spill = 0;

	if (n < 0)
	{
		_putchar('-');
		spill = 5;
		n = -(n + spill);
	}

	last_digit = n % 10;
	if (n >= 10)
		print_number(n / 10);

	_putchar((last_digit + spill) + '0');
}
