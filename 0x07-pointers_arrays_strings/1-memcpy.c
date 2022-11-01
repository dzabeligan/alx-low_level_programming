#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: destination, memory
 * @src: source, memory
 * @n: number of characters to copy from source
 *
 * Return: Pointer to destination after copying
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
