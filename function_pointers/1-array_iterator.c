#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function as a parameter
 * @array: the pointer content the array will be return
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
