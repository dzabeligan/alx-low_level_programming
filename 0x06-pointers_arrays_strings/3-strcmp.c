#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 *
 * Return: Difference between the first unmatched character
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
