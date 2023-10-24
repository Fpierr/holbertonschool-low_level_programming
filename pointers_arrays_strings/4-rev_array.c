#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: the number of elements of the arry
 * @a: the pointer content elements to reverse
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	char tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
