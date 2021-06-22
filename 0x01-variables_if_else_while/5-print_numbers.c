#include <stdio.h>
/**
 * main - Prints alls numbers of base 10
 * Return: 0
 */
int main(void)
{
	char numbers;

	for (numbers = '0' ; numbers <= '9' ; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}

