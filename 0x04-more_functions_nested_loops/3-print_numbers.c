#include "holberton.h"
/**
 * print_numbers - Print dec numbers
 */
void print_numbers(void)
{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		_putchar(numbers);
	}
	_putchar('\n');
}
