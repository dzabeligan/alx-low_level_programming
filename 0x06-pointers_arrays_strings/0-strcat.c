#include "main.h"

/**
 * _strcat - concatenate strings
 * @dest: destination, string
 * @src: source, string
 *
 * Return: Pointer to destination after concatenation
 */
char *_strcat(char *dest, char *src)
{
	char *dest_copy = dest;

	while (*(dest_copy++ + 1) != '\0')
		;
	while ((*dest_copy++ = *src++) != '\0')
		;
	return (dest);
}
