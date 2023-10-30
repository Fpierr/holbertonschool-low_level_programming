#include "main.h"

/**
 * -puts_recursion - print a string follow by a new line
 *  @s: the pointer content the string to print
 *
 *  Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
