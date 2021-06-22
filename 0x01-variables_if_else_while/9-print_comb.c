#include <stdio.h>
/**
 * main - Print all dec-numbers separed by ,
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		if (number > '0')
		{
		putchar(',');
		putchar(' ');
		}
		putchar(number);
	}
	putchar('\n');
	return (0);
}
