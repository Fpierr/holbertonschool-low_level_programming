#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n16;

	for (n16 = '0'; n16 <= '9'; n16++)
	{
		putchar(n16);
	}
	for (n16 = 'a'; n16 <= 'f'; n16++)
	{
		putchar(n16);
	}
	putchar('\n');

	return (0);
}
