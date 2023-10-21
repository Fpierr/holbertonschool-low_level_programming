#include "main.h"

/**
 * print_line - drawns a straignt line in the terminal
 * @n: the number of time the caracter _ to be printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
