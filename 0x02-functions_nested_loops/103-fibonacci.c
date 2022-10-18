#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long sum = 0;

	while (a <= 4000000)
	{
		long c = a + b;

		if (a % 2 == 0)
		{
			sum += a;
		}
		a = b;
		b = c;
	}

	printf("%li\n", sum);

	return (0);
}
