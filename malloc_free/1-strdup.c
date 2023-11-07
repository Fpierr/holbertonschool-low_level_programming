#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * the pointer contains copy of a string
 * @str: the string given as a parameter which contains a copy
 *
 * Return: char
 */
char *_strdup(char *str)
{
	char *T;
	unsigned int i = 0;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	T = malloc(len * sizeof(char) + 1);
	if (T == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		T[i] = str[i];
	}
	return (T);
}
