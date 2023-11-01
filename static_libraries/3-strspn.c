#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: the string content the caracter in accept prefix
 * @accept: the string content a prefix equal at all caracter in s
 *
 * Return: the number of bytes in the initial segment of s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, chk_str;

	unsigned int count = 0;

	i = 0;

	while (s[i] != '\0')
	{
		chk_str = 0;

		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				chk_str = 1;
				break;
			}
			j++;
		}
		if (chk_str)
		{
			count++;
		}
		else
		{
			break;
		}
		i++;
	}
	return (count);
}
