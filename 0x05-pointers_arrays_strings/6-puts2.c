#include "holberton.h"
/**
 * puts2 - Prints 2
 * @str: String
 */
void puts2(char *str)
{
	int size = 0;
	int i;

	while (str[size] != '\0')
	{
		size++;
	}
	size--;
	for (i = 0 ; i < size ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
