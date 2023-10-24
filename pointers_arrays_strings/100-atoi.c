#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the character content the number to convert
 *
 * Return: int, taking account all the - and + signs before the number
 */
int _atoi(char *s)
{
	int i, len, sgn, digt, num, chk_dg;

	i = 0;
	len = 0;
	sgn = 0;
	digt = 0;
	num = 0;
	chk_dg = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && chk_dg == 0)
	{
		if (s[i] != '\0' && s[i] == '-')
			++sgn;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digt = s[i] - '0';
			num = num * 10 + digt;
			if (sgn == 1)
			{
				digt = -digt;
			}
			chk_dg = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			chk_dg = 0;
		}
		i++;
	}
	if (chk_dg == 0)
		return (0);

	return (num);
}
