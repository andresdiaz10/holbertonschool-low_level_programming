#include <stdio.h>
/**
 * main - Prints all numbers of base 16
 * Return: 0
 */
int main(void)
{
	char hex_number;

	for (hex_number = '0' ; hex_number <= '9' ; hex_number++)
	{
		putchar(hex_number);
	}
	for (hex_number = 'a' ; hex_number <= 'f' ; hex_number++)
	{
		putchar(hex_number);
	}
	putchar('\n');
	return (0);
}
