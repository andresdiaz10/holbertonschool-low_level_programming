#include "main.h"

/**
 * get_bit - return the value of a bit given index
 * @n: number
 * @index: index to get the bit
 *
 * Return: bit at index
 *	otherwise - (-1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	if ((!(n & (1 << index))) >= 1)
		return (0);
	return (1);
}
