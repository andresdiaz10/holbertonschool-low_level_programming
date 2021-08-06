#include "main.h"

/**
 * flip_bits - number of bits needed to be flipped to get
 *	from one number to anoter
 *
 * @n: number
 * @m: number to flip
 *
 * Return: bit nessary to  flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bit = 0;

	while (xor > 0)
	{
		bit += (xor & 1);
		xor >>= 1;
	}
	return (bit);
}
