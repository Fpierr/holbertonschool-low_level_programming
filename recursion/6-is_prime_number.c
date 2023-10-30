#include "main.h"

/**
 * is_prime_number - check prime number
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime number, else return 0.
 */
int is_prime_number(int n)
{
	int m = 5;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	while (m * m <= n)
	{
		if (n % m == 0 || n % (m + 2) == 0)
		{
			return (0);
		}
		m += 6;
	}
	return (1);
}
