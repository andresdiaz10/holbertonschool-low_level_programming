#include "holberton.h"

/**
 * _strlen_recursion  - Returns the length of string
 * @s: String
 *
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	static int length;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length++;
		_strlen_recursion(s + 1);
		return (length);
	}
}
