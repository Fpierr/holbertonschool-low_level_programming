#include "main.h"

/**
 * flip_bits - the number of bits to need to flip to get from one at another
 * @n: the first number
 * @m: the second number
 *
 * Return: the numbert of bits need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count_bit = 0;

	while (xor_result)
	{
		count_bit = count_bit + (xor_result & 1);
		xor_result = xor_result >> 1;
	}
	return (count_bit);
}
