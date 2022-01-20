#include "search_algos.h"


/**
 * print_search - Print array
 *
 * @array: array is a pointer to the current element
 * @bg: begin of the index
 * @end: end
 * Return: void
 */
void print_search(int *array, size_t bg, size_t end)
{
	size_t index;

	printf("Searching in array: ");
	for (index = bg; index < end; index++)
	{
		printf("%i, ", *(array + index));
	}
	printf("%i\n", *(array + index));
}



/**
 * binary_search - searches for a value in a sorted array
 *                 of integers using the Binary search
 * @array: array is a pointer to the first element of the array to search
 * @size: size is the number of elements in array
 * @value: is the value to search for
 *
 * Return: function must return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t bg;
	size_t mid_point;
	size_t end;

	if (!array)
	{
		return (-1);
	}
	for (bg = 0, end = size - 1; bg <= end;)
	{
		mid_point = (bg + end) / 2;
		print_search(array, bg, end);

		if (value > *(array + mid_point))
		{
			bg = mid_point + 1;
		}
		else if (value < *(array + mid_point))
		{
			end = mid_point - 1;
		}
		else
		{
			return (mid_point);
		}
	}
	return (-1);
}
