#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats strings
 * @s1: string
 * @s2: string
 * @n: n amount of bytes to copy from s2
 *
 * Return: return a pointer to concatenated string, NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *s;

	while (s1 && s1[len1] != '\0')
		len1++;
	while (s2 && s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	s = (char *)malloc(sizeof(char) * n + len1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = *s1++;

	for (i = 0; i < n; i++)
		s[i + len1] = *s2++;

	s[i + len1] = '\0';

	return (s);
}
