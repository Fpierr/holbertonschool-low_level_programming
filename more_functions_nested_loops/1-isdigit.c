#include "main.h"

/**
 * _isdigit - check for a digit (0 thtough 9)
 * @c: number will be check
 *
 * Return: 1 if c is a digit number else return 0
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
