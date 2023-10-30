#include "main.h"

/**
 * -puts_recursion - print a string follow by a new line
 *  @s: the pointer content the string to print
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
	s++;
	_puts_recursion(s);
}
