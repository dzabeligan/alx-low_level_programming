#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Compute length of a string
 * @s: string
 *
 * Return: length of string
 */
static int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * argstostr - concatenates all the arguments in pointer to strings
 * @ac: arg count
 * @av: pointer to strings
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int len = 0, i = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (str);

	for (i = 0; i < ac; i++)
		len += (_strlen(av[i]) + 1);
	len++;

	str = (char *)malloc(len);
	if (str == NULL)
		return (str);

	for (i = 0; i < ac; i++)
	{
		int j = 0;
		int size = 0;

		size = _strlen(av[i]);
		for (j = 0; j < size; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
