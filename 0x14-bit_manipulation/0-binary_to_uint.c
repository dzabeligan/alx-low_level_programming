#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to int
 * @b: binary string
 *
 * Return: int conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b || (*b != '0' && *b != '1'))
		return (0);

	n |= *b - '0';
	while (*(++b))
	{
		if (*b != '0' && *b != '1')
			return (0);
		n <<= 1;
		n |= *b - '0';
	}

	return (n);
}
