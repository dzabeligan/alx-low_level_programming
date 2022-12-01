#include "main.h"

/**
 * print_binary - print binary representation of number
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	int last_digit = 0;

	last_digit = n & 0x1;
	if (n > 0x1)
		print_binary(n >> 1);
	_putchar(last_digit + '0');
}
