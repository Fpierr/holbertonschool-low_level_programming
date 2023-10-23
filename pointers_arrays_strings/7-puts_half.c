#include "main.h"

/**
 * puts_half - print half of a string
 * @str: the caracter content number to print
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len, n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;

	while (n < len)
	{
		_putchar(str[n + 1]);
		n++;
	}
	_putchar('\n');
}
