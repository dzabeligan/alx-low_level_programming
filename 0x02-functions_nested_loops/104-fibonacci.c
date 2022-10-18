#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	const int n = 90;
	unsigned long a = 1;
	unsigned long b = 2;

	for (i = 1; i < n; i++)
	{
		unsigned long c = a + b;

		printf("%lu, ", a);
		a = b;
		b = c;
	}
	{
		unsigned long a_half1 = a / 100000000000;
		unsigned long a_half2 = a % 100000000000;
		unsigned long b_half1 = b / 100000000000;
		unsigned long b_half2 = b % 100000000000;

		for (; i < 98; i++)
		{
			unsigned long half1 = a_half1 + b_half1;
			unsigned long half2 = a_half2 + b_half2;

			if (half2 > 99999999999)
			{
				half1++;
				half2 %= 100000000000;
			}

			printf("%lu%011lu, ", a_half1, a_half2);
			a_half1 = b_half1;
			a_half2 = b_half2;
			b_half1 = half1;
			b_half2 = half2;
		}
		printf("%lu%011lu\n", a_half1, a_half2);
	}

	return (0);
}
