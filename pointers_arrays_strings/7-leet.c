#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the pointer content the string to encode
 *
 * Return: char
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char lt[] = "aAeEoOtTlL";
	char encod[] = "4433007711";

	while (str[i] != '\0')
	{
		while (lt[j] != '\0')
		{
			if (str[i] == lt[j])
			{
				str[i] = encod[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
