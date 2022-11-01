#include "main.h"

/**
 * find - find character in string
 *
 * @str: String to search from
 * @c: Character to search for
 * Return: 1 if character is found, else return 0
 */
static int find(const char *str, const char c)
{
	while (*str)
		if (*str++ == c)
			return (1);
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search from
 * @accept: string containing bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept, or
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (find(accept, *s))
			return (s);
		s++;
	}
	return (0);
}
