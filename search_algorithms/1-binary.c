#include "search_algos.h"

/**
 * binary_search - using the Binary search algorithm to search value
 * in a sorted array
 * @array: the pointer content an array
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t half = 0;

	if (array == NULL || size == 0)
		return (-1);
	print_array(array, low, size);

	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (half);
	}
	return (-1);
}

/**
 * print_array - print all elements in an array
 * @array: list of elements
 * @high: upper bound
 * @low: lower bound
 *
 * Return: void
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low > high)
		return;
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%u\n", array[high]);
		return;
	}

	while (low <= high)
	{
		printf("%u", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
