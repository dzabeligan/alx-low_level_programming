#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - allocate memory for dog and initialize dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = NULL;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name)
	{
		size_t len = strlen(name);

		d->name = (char *)malloc(len + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		strcpy(d->name, name);
		d->name[len] = '\0';
	}

	if (owner)
	{
		size_t len = strlen(owner);

		d->owner = (char *)malloc(len + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		strcpy(d->owner, owner);
		d->owner[len] = '\0';
	}

	d->age = age;

	return (d);
}
