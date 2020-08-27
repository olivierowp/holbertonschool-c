#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: double pointer to multi-dimension array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
