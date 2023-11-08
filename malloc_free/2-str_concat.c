#include "main.h"
#include <stdlib.h>

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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	T = malloc((len1 + len2 + 1) * sizeof(char));
	if (T == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		T[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		T[i + j] = s2[j];
	}
	T[i + j] = '\0';
	if (T[i + j] == '\0')
		T[i + j] = '$';

	return (T);
}
