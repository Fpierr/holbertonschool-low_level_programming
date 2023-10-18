#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase;
	char upercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (upercase = 'A'; upercase <= 'Z'; upercase++)
	{
		putchar(upercase);
	}
	putchar('\n');

	return (0);
}
