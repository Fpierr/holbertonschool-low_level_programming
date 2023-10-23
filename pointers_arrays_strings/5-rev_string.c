#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer content character to reverse
 *
 * Return: always 0.
 */
void rev_string(char *s)
{
	int i, len1, len2;
	char tmp;

	i = 0;
	len1 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 - 1;
	for (i = 0; i <= len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}
}
