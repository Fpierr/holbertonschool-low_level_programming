#include "main.h"

/**
 * _puts_recursion - function the print a string followed by a new line
 *  @s: the pointer content the string to print whith puts_recursion
 *
 *  Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
