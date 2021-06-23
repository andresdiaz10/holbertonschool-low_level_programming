#include "holberton.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: Number
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int aux;

	aux = n % 10;
	_putchar(aux);
	return (aux);
}
