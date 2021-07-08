#include "holberton.h"

/**
 * factorial - Returns the factorial of the given number
 * @n: Number
 *
 * Return: Factorial of the number
 */
int factorial(int n)
{
	if (n >= 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
