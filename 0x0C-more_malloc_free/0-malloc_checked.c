#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a
 * @b: a
 *
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
