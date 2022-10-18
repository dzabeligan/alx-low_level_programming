#include "main.h"

/**
 * print_sign - Check if number is positive, negative, or zero
 * print + if number is positive
 * print 0 if number is 0
 * print - if number is negative
 * @n: The number to check
 *
 * Return: 1 if number is positive, 0 if number is zero,
 * and -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
