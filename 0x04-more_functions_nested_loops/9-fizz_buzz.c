#include <stdio.h>
#include "holberton.h"
/**
 * main - Print fizz buzz
 * Return: 0 always
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - Fizz buzz
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
