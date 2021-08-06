#include "main.h"

/**
 * set_bit - set value of a bit a given index to 1
 * @n: pointer to the number
 * @index: index to set 1
 *
 * Return: 1
 *	otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n |= (1 << index);
	return (1);
}
