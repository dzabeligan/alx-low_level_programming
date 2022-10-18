#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	const int n = 50;
	long a = 1;
	long b = 2;

	for (i = 1; i < n; i++)
	{
		long c = a + b;

		printf("%li, ", a);
		a = b;
		b = c;
	}

	printf("%li\n", a);

	return (0);
}
