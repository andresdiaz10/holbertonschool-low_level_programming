#include "holberton.h"
/**
 * print_sign - Checks the sign of a number
 * @n: Number to check
 *
 * Return: 1  and print + if n is greater than zero.
 * 0 and prints 0 if n is zero.
 * otherwise returns -1 and prints -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
