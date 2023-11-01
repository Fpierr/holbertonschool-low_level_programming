#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring
 * @haystack: string 1, content the substring of needle to locate
 * @needle: string 2, is a substring in haystack
 *
 * Return: a pointer to the beginning of the localed substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	i = 0;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
