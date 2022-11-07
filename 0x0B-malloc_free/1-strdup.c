#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocate space in memory, copy string given as a parameter
 * @str: given string
 *
 * Return: pointer to allocated string
 */
char *_strdup(char *str)
{
	unsigned int len = 0, i = 0;
	char *dup = NULL;

	if (str == NULL)
		return (dup);

	while (str[len++])
		;

	dup = (char *)malloc(len);
	if (dup == NULL)
		return (dup);

	for (i = 0; i < len; i++)
		dup[i] = str[i];

	return (dup);
}
