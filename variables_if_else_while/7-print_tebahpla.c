#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase_za;

	for (lowercase_za = 'z'; lowercase_za >= 'a'; lowercase_za--)
		putchar(lowercase_za);
	putchar('\n');

	return (0);
}
