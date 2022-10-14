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
	char c = '0';

	while (c <= 'f')
	{
		putchar(c);

		if (c == '9')
		{
			c = 'a';
			continue;
		}

		c++;
	}
	putchar('\n');
	return (0);
}
