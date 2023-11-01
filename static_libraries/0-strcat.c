#include "main.h"

/**
 * _strcat - concatenate two string, appends the src string to the dest string
 * @dest: pointer content string will be add
 * @src: pointer content string to concenate
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	return (dest);
}
