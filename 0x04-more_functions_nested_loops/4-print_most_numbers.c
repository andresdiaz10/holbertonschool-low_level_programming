#include "holberton.h"
/**
 * print_most_numbers - Print the numbers using _putchar
 */
void print_most_numbers(void)
{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		if (numbers == '2' || numbers == '4')
		{
			numbers++;
		}
		_putchar(numbers);
	}
	_putchar('\n');
}
