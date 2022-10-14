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

	while (d1 <= 55)
	{
		int d2 = d1 + 1;

		while (d2 <= 56)
		{
			int d3 = d2 + 1;

			while (d3 <= 57)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				if (!(d1 == 55 && d2 == 56 && d3 == 57))
				{
					putchar(',');
					putchar(' ');
				}
				d3++;
			}

			d2++;
		}

		d1++;
	}
	putchar('\n');
	return (0);
}
