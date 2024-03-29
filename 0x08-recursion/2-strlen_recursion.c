#include "holberton.h"

/**
 * _strlen_recursion  - Returns the length of string
 * @s: String
 *
 * Return: Length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
