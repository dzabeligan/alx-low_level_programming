#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: character, byte
 * @n: number of bytes to write
 *
 * Return: Pointer to memory after filling
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
