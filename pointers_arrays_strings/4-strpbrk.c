#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - shearche a string for any of a set of bytes
 * @s: the string to shearche to locate first occurence
 * @accept: the string content all caracters in the string s
 *
 * Return: a pointer to the byte in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
