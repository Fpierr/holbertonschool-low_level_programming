#include "main.h"

/**
 * _memset - to fill memory with a constante byte
 * @s: pointer content the memory area to fill
 * @n: the size of memory space
 * @b: the constante byte to use to fill memory
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
