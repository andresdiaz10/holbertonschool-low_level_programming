#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter on
 *		     each element of an array.
 * @array: array
 * @size: array size
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
	else
		return;
}
