#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: if little endian 1
 *	if big endian 0
 */

int get_endianness(void)
{
	int aux = 69;
	char *endian = (void *)&aux;

	if (*endian == 1)
		return (1);
	return (0);
}
