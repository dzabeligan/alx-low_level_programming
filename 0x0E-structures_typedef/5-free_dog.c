#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - allocate memory and set all values to 0
 * @d: pointer to dog object
 *
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
