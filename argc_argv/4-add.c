#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point main
 * @argc: the number of arguments
 * @argv: the pointer containt an array of strings
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int number = 0;
	int found = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				found = 1;
				break;
			}
		}
		if (!found)
		{
			number = atoi(argv[i]);
			if (number < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + number;
		}
	}
	printf("%d\n", sum);

	return (found ? 1 : 0);
}
