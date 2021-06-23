#include "holberton.h"
#include <limits.h>
/**
 * print_last_digit - Print the last digit of a number
 * @n: Number
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n == INIT_MIN)
	{
		_putchar('8');
		return (8);
	}
	else if (n < 0 && n != INIT_MIN)
	{
		n = n * -1;
	}
	_putchar((n % 10) + '0');
	return ((n % 10));
}
