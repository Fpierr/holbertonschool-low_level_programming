#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list A);
void print_integer(va_list A);
void print_float(va_list A);
void print_string(va_list A);

/**
 * struct all_type - definition of the structure all_type
 * @A: the parameter that take the type of data
 * @f: the function pointer
 */
typedef struct all_t
{
	char T;
	void (*f)(va_list);
} data_type;

#endif
