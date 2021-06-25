#include "holberton.h"
/**
 * _isupper - Checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
