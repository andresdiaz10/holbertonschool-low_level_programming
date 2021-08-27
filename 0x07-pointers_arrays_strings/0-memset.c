#include "main.h"

/**
 * _memset - a
 * @s: a
 * @c: a
 * @n: a
 *
 * Return: a
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s;
	unsigned char value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
