#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number to check bit at index
 * @index: index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return ((n >> index) & 0x01);
}
