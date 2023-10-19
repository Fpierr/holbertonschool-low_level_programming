#include "main.h"

/**
 * times_table - print time table
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k == 0)
			{
				_putchar(k + '0');
			}
			else if (k <= 9)
			{
				_putchar(32);
				_putchar(k + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			if (k != 9)
			{
				_putchar(',');
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
