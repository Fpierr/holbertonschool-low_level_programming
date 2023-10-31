#include <stdio.h>

/**
 * main - Entry point main
 * @argc: the number of argument
 * @argv: the vector argument or the pointer containt array of argument
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
