#include "main.h"

/**
 * _strlen - Return the length of a string
 * @s: the caracter content of the lenght
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
