#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: string to be print between
 * @n: number of string passed
 * @...: strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	va_start(strings, n);
	for (i = 0 ; i < n ; i++)
	{
		string = va_arg(strings, char *);
		if (!(string))
			printf("(nil)");
		else
			printf("%s", string);
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
