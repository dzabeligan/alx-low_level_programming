#include "main.h"

/**
 * clear_bit - clear bit at index
 * @n: number
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(0x01UL << index);
	return (1);
}
