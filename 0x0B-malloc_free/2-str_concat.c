#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Compute length of a string
 * @s1: string
 * @s2: string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *buf = NULL;
	unsigned int len = 0, i = 0;

	while (s1 && s1[i++])
		len++;

	i = 0;
	while (s2 && s2[i++])
		len++;
	len++;

	buf = (char *)malloc(len);
	if (buf == NULL)
		return (buf);

	i = 0;
	while (i < len - 1)
	{
		while (s1 && *s1)
			buf[i++] = *s1++;
		while (s2 && *s2)
			buf[i++] = *s2++;
	}
	buf[i] = '\0';

	return (buf);
}
