#include "main.h"

/**
 * _strcmp - compare two strings, work exactly like strcmp
 * @s1: the pointer conter the first string to compare
 * @s2: the pointer content the second string to compare
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	while (s1[len1] != '\0' && s2[len2] != '\0' && s1[len1] == s2[len2])
	{
		len1++;
		len2++;
	}
	if (s1[len1] == s2[len2])
	{
		return (0);
	}
	else
	{
		return (s1[len1] - s2[len2]);
	}
}
