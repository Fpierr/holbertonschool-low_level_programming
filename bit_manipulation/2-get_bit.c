#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: the value will be return
 * @index: the index in this strig starting from 0 of the bit
 *
 * Return: value of a bit, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
