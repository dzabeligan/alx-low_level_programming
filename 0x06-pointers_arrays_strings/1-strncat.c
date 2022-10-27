#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: destination, string
 * @src: source, string
 * @n: number of characters to concatenate from source
 *
 * Return: Pointer to destination after concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_copy = dest;

	while (*(dest_copy++ + 1) != '\0')
		;
	while (n-- && (*dest_copy++ = *src++) != '\0')
		;
	return (dest);
}
