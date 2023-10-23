#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first value will be swap
 * @b: the second value will be swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
