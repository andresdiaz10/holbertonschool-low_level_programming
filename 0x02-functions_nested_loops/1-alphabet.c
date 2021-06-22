#include "holberton.h"
/**
 * print_alphabet - Print alphabet, in lowercase
 */
void print_alphabet(void);
/**
 * main - check code
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Print alphabet, in lowercase
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
