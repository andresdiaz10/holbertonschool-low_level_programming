#include "holberton.h"
/**
 * print_triangle - Print a triangle xd
 * @n: size of triangle
 */
void print_triangle(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (j = i; j < n ; j++)
			{
				_putchar(' ');
			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
