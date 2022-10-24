#include "main.h"

/**
 * rev_string - Reverse string
 * @s: pointer to char type (string)
 *
 */
void rev_string(char *s)
{
	char *left = s;
	char *right = s;

	while (*(right++) != '\0')
		;
	right -= 2;

	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
