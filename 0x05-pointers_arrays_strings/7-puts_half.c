#include "holberton.h"
/**
 * puts_half - Prints half
 * @str: String
 */
void puts_half(char *str)
{
	int size = 0;
	int half_size = 0;
	int i = 0;

	while (str[size] != '\0')
	{
		size++;
	}
	half_size = (size - 1) / 2;
<<<<<<< HEAD
=======
	half_size += 2;
>>>>>>> aec0714b1e18268e5331346ca70650799c84e30d
	for (i = half_size ; i <= size ; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
