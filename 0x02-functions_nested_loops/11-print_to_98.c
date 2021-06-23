#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - asdd
 * @n: - asdds
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n > 97 ; n--)
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		for (n < 99 ; n++)
		{
			printf("%d, ", n);
			if (n == 98)
			{
				printf("%d", n);
			}
		}
	}
}
