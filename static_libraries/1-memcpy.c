#include "main.h"

/**
 * _memcpy - copy the memory of area
 * @dest: the destination pointer to copy memory area
 * @src: the source pointer that the memory area wille be copy
 * @n: the number of byte to copy
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
