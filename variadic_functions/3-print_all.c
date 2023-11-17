#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prit a char with variadic function
 * @A: the parameter content the list of argument to print
 *
 * Return: void
 */
void print_char(va_list A)
{
	printf("%c", va_arg(A, int));
}

/**
 * print_integer - print an integer with variadic function
 * @A: the parameter content the list of argument to print
 *
 * Return: void
 */
void print_integer(va_list A)
{
	printf("%d", va_arg(A, int));
}

/**
 * print_float - print a float with variadic function
 * @A: the parameter content the list of argument to print
 *
 * Return: void
 */
void print_float(va_list A)
{
	printf("%f", va_arg(A, double));
}

/**
 * print_string - print a string with variadic function
 * @A: the parameter content the list of argument to print
 *
 * Return: void
 */
void print_string(va_list A)
{
	char *str;

	str = va_arg(A, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - print anything with variadic function
 * @format: the list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list A;

	data_type all_t[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL} };

	va_start(A, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (all_t[j].T != '\0')
		{
			if (all_t[j].T == format[i])
			{
				printf("%s", separator);
				all_t[j].f(A);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(A);
	printf("\n");
}
