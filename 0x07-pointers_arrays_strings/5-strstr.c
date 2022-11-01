#include "main.h"

/**
 * _strstr - Convert string to uppercase
 * @haystack: string to search from
 * @needle: substring, string
 * The terminating null bytes (\0) are not compared
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		char *needle_copy = needle;

		if (*haystack == *needle_copy)
		{
			char *haystack_copy = haystack;

			while (*needle_copy)
				if (*needle_copy++ != *haystack_copy++)
					break;

			if (!*needle_copy)
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
