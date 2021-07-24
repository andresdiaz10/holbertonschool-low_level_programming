#include "variadic_functions.h"

/**
 * print_numbers - print the numbers
 * @separator: char to be print between
 * @n: number of integers
 * @...: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
