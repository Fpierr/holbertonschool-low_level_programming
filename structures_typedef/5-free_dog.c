#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog of deftype structure
 * @d: the dog dog pointer value to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
		return;
	}

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
