#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Print elements of array
 * @a: Array
 * @n: Size of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == (n - 1))
		{
			printf("%i", *(a + i));
		}
		else
		{
			printf("%i", *(a + i));
			printf(", ");
		}
	}
	printf("\n");
}
