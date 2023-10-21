#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times to print the caracter \
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
