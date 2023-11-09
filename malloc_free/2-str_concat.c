#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: the first string to concatenate
 * @s2: the second string to concatenate
 *
 * Return: NULL for empty string, and or faillure
 */
char *str_concat(char *s1, char *s2)
{
	char *T;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		T = s2;
	}
	if (s2 == NULL)
	{
		T = s1;
	}

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	T = malloc((len1 + len2 + 1) * sizeof(char));
	if (T == NULL)
	{
		free(T);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		T[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		T[i + j] = s2[j];
	}
	T[i + j] = '\0';

	return (T);
}
