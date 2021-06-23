#include "holberton.h"
/**
 * _isalpha - Checks for lowercase or uppercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase or uppercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
