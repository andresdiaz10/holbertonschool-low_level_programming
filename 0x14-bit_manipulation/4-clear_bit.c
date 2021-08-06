#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 given index
 * @n: pointer to the number
 * @index: index to set 0
 *
 * Return: an error -1
 *	otherwise 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (64))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
