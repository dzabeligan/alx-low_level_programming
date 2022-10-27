#include <stdio.h>

/**
 * print_buffer - Print buffer
 * @b: buffer
 * @size: size of buffer
 *
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	while (i < size)
	{
		int j = 0;

		printf("%08x: ", i);
		while (j < 10)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if ((j % 2) != 0 && j != 0)
				printf(" ");

			j++;
		}
		j = 0;
		while (j < 10)
		{
			if (i >= size)
				break;
			else if (b[i] < 32 || b[i] > 126)
				putchar('.');
			else
				putchar(b[i]);
			i++;
			j++;
		}
		putchar('\n');
	}

	if (size <= 0)
		putchar('\n');
}
