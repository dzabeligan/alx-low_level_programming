#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars, and initialize it with a specific
 * char
 * @size: size of array
 * @c: character to initialize by
 *
 * Return: pointer to allocated memory, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = NULL;

	if (size > 0)
		array = (char *)malloc(size);

	if (array == NULL)
		return (array);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
