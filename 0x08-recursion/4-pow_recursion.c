#include "holberton.h"

/**
 * _pow_recursion - Returns the power of the given number
 * @x: Base
 * @y: Exponent
 * Return: Power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y >= 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
