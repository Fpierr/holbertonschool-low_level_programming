#include "main.h"

/**
 * is_prime_check - check prime number
 * @n: the number to check
 * @m: the dvisor to test
 *
 * Return: 1 if the input integer is a prime number, else return 0.
 */
int is_prime_check(int n, int m)
{
	if (n <= 1)
	{
		return (0);
	}
	if (m * m > n)
	{
		return (1);
	}
	if (n % m == 0 || n % (m + 2) == 0)
	{
		return (0);
	}
	return (is_prime_check(n, m + 6));
}

/**
 * is_prime_number - check prime number
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime number, else return 0.
 */
int is_prime_number(int n)
{
	if (n <= 3)
		return (n > 1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime_check(n, 5));
}
