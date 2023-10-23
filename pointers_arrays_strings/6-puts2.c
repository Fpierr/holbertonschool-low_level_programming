#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: character content number to print
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
