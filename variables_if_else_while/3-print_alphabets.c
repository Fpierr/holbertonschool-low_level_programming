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
		putchar('\n');
	}
	for(upercase = 'A'; upercase <= 'Z'; upercase++)
	{
		putchar(lowercase);
		putchar('\n');
	}
	return (0);
}
