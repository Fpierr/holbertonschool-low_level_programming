#include <stdio.h>

/**
 * main - Entry point
 * @argc: the number of argument in command list
 * @argv: the array of argument containt the character of the string
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
