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
	char c = 'a';

	while (c >= 'a' || c <= 'Z')
	{
		putchar(c);

		if (c == 'z')
		{
			c = 'A';
			continue;
		}

		c++;
	}
	putchar('\n');
	return (0);
}
