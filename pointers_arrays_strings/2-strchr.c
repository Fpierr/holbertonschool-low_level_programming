#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate a character in a string
 * @s: the pointer content the character to locate
 * @c: the character in the string s
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
	{
		return (NULL);
	}
}
