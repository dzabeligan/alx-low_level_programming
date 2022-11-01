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
 * _strspn - search a string for a set of bytes
  * @s: source string
  * @accept: accepted string
  *
  * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int sub_len = 0;

	while (*s)
		if (find(accept, *s++))
			sub_len++;
		else
			break;

	return (sub_len);
}
