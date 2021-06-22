#include <stdio.h>
/**
 * main - Print all single numbers of base 10 using int
 * Return: 0
 */
int main(void)
{
	int numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
