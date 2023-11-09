#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements to allocate memory
 * @size: the size of elements
 *
 * Return: NULL if size or nmemb is 0, or if calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *A;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	A = malloc(nmemb * size);

	if (A == NULL)
	{
		free(A);
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		A[i] = 0;
	}
	return (A);
}
