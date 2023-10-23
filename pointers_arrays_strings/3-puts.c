#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: the pointer to the string to print
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
