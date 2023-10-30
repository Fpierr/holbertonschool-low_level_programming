#include "main.h"

/**
 * find_sqrt - find the result of the square root of a number
 * @m: the square of the number
 * @p: the square root
 *
 * Return: 1 if succes, -1 if error
 */
int find_sqrt(int m, int p)
{
	if (p * p > m)
	{
		return (-1);
	}
	else if (p * p == m)
	{
		return (p);
	}
	return (find_sqrt(m, p + 1));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number content the naturak square to return
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
