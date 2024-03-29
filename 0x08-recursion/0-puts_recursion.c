#include "holberton.h"

/**
 * _puts_recursion - Print a string using recursion
 * @s: String to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
