#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name whith pointer function
 * @name: the pointer content the name to print
 * @f: the pointer function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
