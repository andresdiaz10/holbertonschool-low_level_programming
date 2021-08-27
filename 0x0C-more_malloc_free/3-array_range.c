#include <stdlib.h>
#include "main.h"
/**
 * array_range - a
 * @min: a
 * @max: a
 *
 * Return: a
 */
int *array_range(int min, int max)
{
	int *array;
	int index;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
