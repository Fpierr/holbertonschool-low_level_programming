#include "function_pointers.h"

/**
 * int_index - shearche for an integer
 * @array: the pointer containt the array
 * @size: the size of the array
 * @cmp: the function of capmaraison
 *
 * Return: -1 if no element matches else return index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
