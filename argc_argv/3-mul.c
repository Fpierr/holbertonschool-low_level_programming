#include "stdio.h"
#include "stdlib.h"

/**
 * main - Entry point main
 * @argc: the number of argument
 * @argv: the pointer containt the array of string
 * Return: int
 */
int main(int argc, char *argv[])
{
	int product = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
	}
	return (0);
}
