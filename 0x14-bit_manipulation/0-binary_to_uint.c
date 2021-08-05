#include "main.h"

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: a pointer to a binary string
 *
 * Return: if null or contains chars != 0 or 1, 0
 *	otherwise - decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0;
	unsigned int pow = 1;
	int size = 0;

	if (!(b))
		return (0);
	while (b[size])
		size++;
	for (size -= 1 ; size >= 0 ; size--)
	{
		if (b[size] == '0' || b[size] == '1')
		{
			tmp += (b[size] - 48) * pow;
			pow *= 2;
		}
		else
			return (0);
	}
	return (tmp);
}
