#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1 = 48;

	while (d1 <= 56)
	{
		int d2 = d1 + 1;

		while (d2 <= 57)
		{
			putchar(d1);
			putchar(d2);
			if (!(d1 == 56 && d2 == 57))
			{
				putchar(',');
				putchar(' ');
			}
			d2++;
		}

		d1++;
	}
	putchar('\n');
	return (0);
}
