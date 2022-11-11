#include "main.h"
#include <stdlib.h>

/**
 * array_range - allocate int array containing values from min to max
 * @min: min number
 * @max: max of arrays
 *
 * Return: pointer to int array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *t;

	if (min > max)
		return (NULL);

	t = (int *)malloc(sizeof(int) * (max - min + 1));
	if (t == NULL)
		return (NULL);

	while (min <= max)
	{
		t[i++] = min;
		min++;
	}
	return (t);
}
