#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - asdd
 * @n: - asdds
 */
void print_to_98(int n)
{
	int aux;

	if (n > 98)
	{
		for (aux = n ; aux >= 99 ; aux--)
		{
			printf("%d, ", aux);
		}
		if (aux == 98)
		{
			printf("%d", aux);
		}
	}
	else
	{
		for (aux = n ; aux <= 97 ; aux++)
		{
			printf("%d, ", aux);
		}
		if (aux == 98)
		{
			printf("%d", aux);
		}
	}
}
