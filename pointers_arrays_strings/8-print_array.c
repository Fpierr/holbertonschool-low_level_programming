#include "main.h"
#include <stdio.h>

/**
 * print_array - print n element of an array of integers
 * @a: the printer will be print the number of element
 * @n: the number to print
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
