#include "main.h"

/**
 * _abs - comptes the absolute value of an integer
 * @c: number to compute
 *
 * Return: Always int
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
