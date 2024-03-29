#include "search_algos.h"

/**
 * linear_search -using the Linear search algorithm searches  value in array
 * @array: a pointer to the array to search value
 * @size: size of the array
 * @value: value of the array
 *
 * Return: an index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	} return (-1);
}
