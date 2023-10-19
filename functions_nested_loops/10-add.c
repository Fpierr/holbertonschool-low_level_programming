#include "main.h"

/**
 * add - adds two integers and returns the result
 * @a: number to add
 * @b: number to add
 *
 * Return: int
 */
int add(int a, int b)
{
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar((a + b) + '0');
		}
		_putchar('\n');
	}
	return (0);
}
