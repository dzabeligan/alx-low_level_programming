#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory and set to 0
 * @nmemb: number of elements
 * @size: size of bytes
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	t = (char *)malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		t[i] = 0;

	return ((void *)t);
}
