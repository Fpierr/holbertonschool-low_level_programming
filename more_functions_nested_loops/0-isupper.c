#include "main.h"

/**
 * _isupper - checks for supercase caracter
 * @c: number will be check
 *
 * Return: 1 if c is supercase else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
