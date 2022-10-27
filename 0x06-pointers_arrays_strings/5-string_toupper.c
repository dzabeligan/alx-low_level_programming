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
 * string_toupper - Convert string to uppercase
 * @str: string
 *
 * Return: Pointer to string after convertion
 */
char *string_toupper(char *str)
{
	char *str_copy = str;

	while (*str_copy)
	{
		if (_islower(*str_copy))
			*str_copy -= 32;
		str_copy++;
	}
	return (str);
}
