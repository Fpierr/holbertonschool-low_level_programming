#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - that prints numbers of argument follow by new line
 * @separator: the string to be printed between numbers
 * @n: the number of argument will be print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		if (n > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(numb, int));
	}
	va_end(numb);
	printf("\n");
}
