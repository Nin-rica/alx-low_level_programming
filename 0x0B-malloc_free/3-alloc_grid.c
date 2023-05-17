#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: parameter
 * @height: parameter
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(**arr) * width);
		if (arr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
