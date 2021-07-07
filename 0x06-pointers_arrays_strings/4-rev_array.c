#include "holberton.h"
/**
 * reverse_array - Reverse the array
 * @a: Array to reverse
 * @n: Number of elements
 */
void reverse_array(int *a, int n)
{
	int aux;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		aux = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = aux;
		i++;
		j--;
	}
}
