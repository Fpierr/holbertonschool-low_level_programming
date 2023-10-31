#include <stdio.h>

/**
 * main - Entry point main
 * @argc: the number of a argument in the command line
 * @argv: a pointer containt the array content the string
 *
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
