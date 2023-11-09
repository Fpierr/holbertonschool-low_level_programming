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

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;

	len1 = strlen(s1);
	len2 = strlen(s2);

	T = malloc((len1 + len2 + 1) * sizeof(char));
	if (T == NULL)
	{
		free(T);
		return (NULL);
	}
	strcpy(T, s1);
	strcat(T, s2);

	return (T);
}
