#include "main.h"

/**
 * *_strcpy - copy a string
 * @src: pointer to copy the strin
 * @dest: pointer including the character will be copy from src
 *
 * Return: char pointed to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
