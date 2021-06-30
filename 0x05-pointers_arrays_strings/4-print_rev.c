#include "holberton.h"
/**
 * print_rev - Print a string in revers
 * @s: String
 */
void print_rev(char *s)
{
	int size = 0;

	while (s[size] != '\0')
		size++;
	while (size >= 0)
	{
		_putchar(*(s + size));
		size--;
	}
	_putchar('\n');
}
