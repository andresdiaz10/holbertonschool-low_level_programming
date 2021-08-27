#include "main.h"

/**
 * _memcpy - a
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: a
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
