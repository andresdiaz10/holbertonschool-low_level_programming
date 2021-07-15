#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - grid a to a 2 dimensional array of integers
 * @height: height of the matrix
 * @width: width of the matrix
 *
 * Return: the pointer of the 2d array
 */
int **alloc_grid(int height, int width)
{
	int **arr;
	int i, j;

	if (height <= 0 || width <= 0)
		return ('\0');
	arr = malloc(height * sizeof(int *));
	if (arr)
	{
		for (i = 0 ; i < height ; i++)
		{
			arr[i] = malloc(width * sizeof(int));
		}
		for (i = 0 ; i < height ; i++)
			for (j = 0 ; j < width ; j++)
			{
				arr[i][j] = 0;
			}
		return (arr);
	}
	else
		return ('\0');
}
