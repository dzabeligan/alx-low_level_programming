#include "main.h"

/**
 * _strncpy - copy strings
 * @dest: destination, string
 * @src: source, string
 * @n: number of characters to copy from source
 *
 * Return: Pointer to destination after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *src != '\0')
		dest[i++] = *src++;
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
