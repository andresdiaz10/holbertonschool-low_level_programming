#include "holberton.h"
/**
 * _isdigit - Checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is a digit.
 * 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
