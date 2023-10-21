#include "main.h"

/**
 * print_triangle - to print a triangle, using the caracter #
 * @size: the size to print of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			_putchar(' ');
		}
	}
	{
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
