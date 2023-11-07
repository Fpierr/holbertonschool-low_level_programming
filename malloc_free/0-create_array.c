#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes the array with a specific char
 * @size: the size of the array
 * @c: the specific character to inistalize the array
 *
 * Return: NULL if size = 0, a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *T;

	if (size == 0)
	{
		return (NULL);
	}

	T = malloc(size * sizeof(char));
	if (T == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		T[i] = c;
	}
	return (T);
}
