#include "holberton1.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
/**
 * print_alphabet_x10 - Print the alphabet, in lowercase using _putchar x10
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
/**
 * _islower - Checks for lowercase character
 * @c: Character to check
 *
 * Return: 1 if c is lowercase.
 * 0 otherwise.
 */
int _islower(int c)
{	
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
