#include "main.h"
#include <stdio.h>

/**
 * print_array - Print array items
 * @a: pointer to int type
 * @n: number of items to print in array
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
