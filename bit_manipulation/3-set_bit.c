#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the bit number
 * @index: the index of the bit to set, staring bay zero
 *
 * Return: 1 if it worked, ord -1 if an error occurrred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
