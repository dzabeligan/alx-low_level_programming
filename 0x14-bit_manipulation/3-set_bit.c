#include <string.h>
#include <stdlib.h>

#include "main.h"

/**
 * set_bit - set bit at index
 * @n: number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= 0x01UL << index;
	return (1);
}
