#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: the pointer that point to the number
 * @index: the index of the bit to clear, starting to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (0);

	*n = *n & ~(1 << index);

	return (1);
}
