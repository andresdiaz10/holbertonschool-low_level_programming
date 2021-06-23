#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Number
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return ((n % 10));
}
