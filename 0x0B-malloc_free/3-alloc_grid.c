#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * fill_array - Fill the array with 0
 * @arr: array to fill
 * @width: Width of the array
 * @height: Height of the array
 */
void fill_array(int **arr, int width, int height)
{
	int i, j;

	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			arr[i][j] = 0;
}
/**
 * free_array - Freed when malloc fails
 * @arr: array
 * @height: Height of the array
 */
void free_array(int **arr, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(arr[i]);
	free(arr);
}
/**
 * alloc_grid - grid a to a 2 dimensional array of integers
 * @height: height of the matrix
 * @width: width of the matrix
 *
 * Return: the pointer of the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **arr = NULL;

	if (height <= 0 || width <= 0)
		return ('\0');
	arr = (int **)malloc(height * sizeof(int *));
	if (!(arr))
	{
		free_array(arr, height);
		return ('\0');
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (!(arr[i]))
		{
			free_array(arr, height);
			return ('\0');
		}
	}
	fill_array(arr, width, height);
	return (arr);
}
