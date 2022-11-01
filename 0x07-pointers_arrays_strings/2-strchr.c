#include "main.h"

/**
 * _strchr - find character in string
 * @s: String to search from
 * @c: Character to search for
 *
 * Return: Pointer to first occurence of character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (0);
}
