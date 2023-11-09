#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers with malloc, calloc
 * @min: the minimum value of the array
 * @max: the maximum of vlue of the array
 *
 * Return: NULL if min > max, or if malloc fails
 */
int *array_range(int min, int max)
{
	int i, n;
	int *A;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	A = malloc(n * sizeof(int));
	if (A == 0)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		A[i] = min + i;
	}
	return (A);
}
