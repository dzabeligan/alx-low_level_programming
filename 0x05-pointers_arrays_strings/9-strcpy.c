#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copy string from source to destination
 * @dest: pointer to destination
 * @src: pointer to source
 *
 * Return: pointer to destination string
 */
char *_strcpy(char *dest, char *src)
{
	char c;
	char *dest_copy = dest;

	while ((c = *src++) != '\0')
		*dest_copy++ = c;
	*dest_copy = '\0';

	return (dest);
}
