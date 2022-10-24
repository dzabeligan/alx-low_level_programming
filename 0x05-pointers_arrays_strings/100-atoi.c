#include "main.h"

/**
 * _isdigit - Check if character is digit
 * @c: The character to check
 *
 * Return: 1 if character is digit, 0 if otherwise
 */
static int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _atoi - Convert string to int
 * The number in the string can be preceded by an infinite number of characters
 * Take into account all the - and + signs before the number
 * If there are no numbers in the string, the function returns 0
 * @s: pointer to string
 *
 * Return: Converted integer
 */
int _atoi(char *s)
{
	char c;
	int sign = 1;
	unsigned int n = 0;
	int num_found = 0;

	while ((c = *s++) != '\0')
	{
		if (!_isdigit(c) && num_found)
			break;

		if (c == '-')
			sign *= -1;

		if (_isdigit(c))
		{
			num_found = 1;
			n *= 10;
			n += c - '0';
		}
	}

	return ((int)(n * sign));
}
