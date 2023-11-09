#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return the lenght of a string
 * @s: the string to return lenght
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * string_nconcat - oncatenates two strings
 * @s1: the first string will be concatenate
 * @s2: the second string to concatanate
 * @n: the first n bytes of s2 and NULL treminated
 *
 * Return: Null if the function fails, or in empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i, j;
	char *s3;

	if (s2 == NULL)
		s2 = NULL;

	if (n >= len2)
		n = len2;

	s3 = malloc((len1 + n + 1) * sizeof(char));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';

	return (s3);
}
