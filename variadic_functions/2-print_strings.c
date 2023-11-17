#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - print string with variadic function
 * @separator: the pointer content the separater character
 * @n: the number of strings passed to the functio
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s1;

	if (separator == NULL && n == 0)
		return;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s1 = va_arg(str, char *);

		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		if (s1 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s1);
		}
	}
	va_end(str);
	printf("\n");
}
