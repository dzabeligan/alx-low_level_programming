#include "main.h"

/**
 * _islower - Check if character is lowercase
 * @c: The character to check
 *
 * Return: 1 if character is lowercase, 0 if otherwise
 */
static int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

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
 * cap_string - Capitalize string
 * @str: string
 *
 * Return: Pointer to string after capitalization
 */
char *cap_string(char *str)
{
	char *str_copy = str;
	char separations[] = " \t\n,;.!?\"(){}";

	if (_islower(*str))
		*str -= 32;
	while (*str_copy)
	{
		if (find(separations, *str_copy) && _islower(*(str_copy + 1)))
			*(str_copy + 1) -= 32;

		str_copy++;
	}
	return (str);
}
