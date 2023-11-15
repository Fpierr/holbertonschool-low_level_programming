#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the dog
 * @d: the pointer content the adress of the dog
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("name: (nil)\n");
		}
		else
		{
			printf("name: %s\n", d->name);
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)\n");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
