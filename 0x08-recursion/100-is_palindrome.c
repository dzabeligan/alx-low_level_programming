#include "main.h"

/**
 * _strlen - Compute length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * is_palindrome_helper - Checks if a string is palindrome
 * @s: string
 * @start: index of start
 * @end: index of end
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: string
 *
 * Return: 1 if the string is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
		return (1);
	return (is_palindrome_helper(s, 0, n - 1));
}
