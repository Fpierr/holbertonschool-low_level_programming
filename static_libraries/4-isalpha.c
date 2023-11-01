#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: Character will be checking
 *
 * Return: 1 if c is a letter, lowercase or uppercase else return 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
