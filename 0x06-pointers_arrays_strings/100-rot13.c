#include "main.h"

/**
 * rot13 - Rotate character in string
 * @str: string
 *
 * Return: Pointer to string after replacement
 */
char *rot13(char *str)
{
	char *str_copy = str;
	int i;
	const char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char replacement[] =
	"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (*str_copy)
	{
		for (i = 0; arr[i] != '\0'; i++)
		{
			if (*str_copy == arr[i])
			{
				*str_copy = replacement[i];
				break;
			}
		}
		str_copy++;
	}
	return (str);
}
