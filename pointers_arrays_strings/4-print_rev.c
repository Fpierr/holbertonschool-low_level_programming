#include "main.h"

/**
 * print_rev - print a string in inverse
 * @s: the string to print
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
