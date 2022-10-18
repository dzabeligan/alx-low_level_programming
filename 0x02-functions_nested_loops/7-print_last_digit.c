#include "main.h"

/**
 * print_last_digit - Get the value of the last digit
 * print the last digit
 * @n: Integer passed
 *
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
