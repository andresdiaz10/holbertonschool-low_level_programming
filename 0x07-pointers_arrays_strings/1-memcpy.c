#include "main.h"

/**
 * _memcpy - a
 * @dest: a
 * @src: a
 * @n: a
 *
 * Return: a
 */

char *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
