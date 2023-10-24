#include "main.h"

/**
 * _strncat - concatenate two strings, it will use a most n byte from src
 * @dest: the destination will be concatenate the strings
 * @src: the source content the string will be concatenate to dest
 * @n: number to of caracter to add to dest
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;
	
	len = 0;
	i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';

	return (dest);
}
