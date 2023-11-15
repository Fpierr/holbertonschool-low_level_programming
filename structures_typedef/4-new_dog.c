#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog of structure typedef
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: dog_t pointer type, if the function is fails return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dg;
	int i, j, len1, len2;
	char *new_name, *new_owner;

	len1 = 0;
	while (name[len1] != '\0')
		len1++;
	len2 = 0;
	while (owner[len2] != '\0')
		len2++;
	Dg = malloc(sizeof(dog_t));
	if (Dg == NULL)
	{
		free(Dg);
		return (NULL);
	}
	new_name = malloc((len1 + 1) * sizeof(char));
	if (new_name == NULL)
	{
		free(Dg);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		new_name[i] = name[i];
	new_name[i] = '\0';
	Dg->name = new_name;
	Dg->age = age;
	new_owner = malloc((len2 + 1) * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		free(Dg);
		return (NULL);
	}
	for (j = 0; j < len2; j++)
		new_owner[j] = owner[j];
	new_owner[j] = '\0';
	Dg->owner = new_owner;
	return (Dg);
}
