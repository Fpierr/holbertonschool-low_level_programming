#include "main.h"

/**
 * _strncpy - copy a string, exactly like strncpy
 * @dest: the pointer contetn destination string
 * @src: the pointer content the string source to copy
 * @n: the number of the string to add to dest
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
