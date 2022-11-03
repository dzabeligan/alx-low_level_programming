#include "main.h"

/**
 * wildcmp_helper - Checks if a strings is match
 * @s1: string
 * @s2: string
 * @after_wildcard: placeholder for position right of wildcard
 *
 * Return: 1 if the strings is match, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2, char *after_wildcard)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp_helper(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);

	if (*s2 == '*')
		return (wildcmp_helper(s1, s2 + 1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1, after_wildcard));
	else
		return (wildcmp_helper(s1 + 1, after_wildcard, after_wildcard));
}

/**
 * wildcmp - Checks if a strings is match
 * @s1: string
 * @s2: string
 *
 * Return: 1 if the strings is match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2, s2));
}
