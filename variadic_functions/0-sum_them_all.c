#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - function that return the sum of all parameters
 * @n: the variable content the number of arguments
 *
 * Return: 0 if n equal zero
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list A;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(A, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(A, int);
	}
	va_end(A);
	return (sum);
}
