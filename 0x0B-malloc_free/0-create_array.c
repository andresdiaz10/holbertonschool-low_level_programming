#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array -  creates an array of chars
 * @size: Size of array
 * @c: Char to put in the array
 *
 * Return: NULL if size =0, NULL if it fails, array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = malloc(sizeof(char) * size);

	if (size == 0)
		return ('\0');
	if (arr)
	{
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}
		return (arr);
	}
	else
		return ('\0');
}
