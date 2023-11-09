#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integer
 * @width: the larg or the number of line of the array
 * @height: the number of line of the array
 *
 * Return: if width or height is negative, or if the function faillure
 */
int **alloc_grid(int width, int height)
{
	int **Arr = 0;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	Arr = malloc(height * sizeof(int *));
	if (Arr == NULL)
	{
		free(Arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		Arr[i] = malloc(width * sizeof(int));
		if (Arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(Arr[j]);
			}
			free(Arr);

			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			Arr[i][j] = 0;
		}
	}
	return (Arr);
}
