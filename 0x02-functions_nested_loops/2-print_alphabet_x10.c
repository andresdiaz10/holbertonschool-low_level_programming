#include "holberton.h"
/**
 * print_alphabet_x10 - Print the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
