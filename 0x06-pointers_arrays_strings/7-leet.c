#include "main.h"

/**
 * leet - Replace characters in string
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @str: string
 *
 * Return: Pointer to string after replacement
 */
char *leet(char *str)
{
	char *str_copy = str;
	int i;
	const char arr[] = "aeotl";
	const char replacement[] = "43071";

	while (*str_copy)
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			if (*str_copy == arr[i] || *str_copy + 32 == arr[i])
			{
				*str_copy = replacement[i];
				break;
			}
		}
		str_copy++;
	}
	return (str);
}
