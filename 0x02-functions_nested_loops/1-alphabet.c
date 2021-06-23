#include "holberton.h"
/**
 * print_alphabet - Print the alphabet in lowercase using _putchar
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
