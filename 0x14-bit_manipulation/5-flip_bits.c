#include "main.h"

/**
 * flip_bits - compute number of bits to flip to make numbers equal
 * @n: number
 * @m: number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bits = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		n_bits += (xor & 0x01);
		xor >>= 1;
	}

	return (n_bits);
}
