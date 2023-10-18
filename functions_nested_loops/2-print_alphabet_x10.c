#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alphab;
	char i = 0;

	while (i <= 9)
	{
		for (alphab = 'a'; alphab <= 'z'; alphab++)
		{
			_putchar(alphab);
		}
	_putchar('\n');
	i++;
	}
}
