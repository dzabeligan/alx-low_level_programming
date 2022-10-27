#include "main.h"

/**
 * infinite_add - Entry point
 * @n1: number
 * @n2: number
 * @r: buffer to store the result
 * @size_r: size of buffer
 *
 * Return: Pointer to buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0;
	int len2 = 0;
	int carry = 0;

	while (n1[++len1])
		;
	while (n2[++len2])
		;
	if (size_r < len1 + 1 || size_r < len2 + 1)
		return (0);

	*(r + --size_r) = '\0';
	while (len1 || len2)
	{
		int sum = 0;
		int digit1 = len1 != 0 ? n1[len1 - 1] - '0' : 0;
		int digit2 = len2 != 0 ? n2[len2 - 1] - '0' : 0;

		if (!size_r)
			return (0);

		sum = digit1 + digit2 + carry;

		*(r + --size_r) = ((sum) % 10) + '0';
		carry = sum / 10;
		if (len1)
			len1--;
		if (len2)
			len2--;
	}
	if (carry && size_r)
		*(r + --size_r) = carry + '0';
	else if (carry && !size_r)
		return (0);

	return (r + size_r);
}
