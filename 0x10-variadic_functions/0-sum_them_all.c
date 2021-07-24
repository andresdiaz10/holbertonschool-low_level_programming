#include "variadic_functions.h"

/**
 * sum_them_all - sum of all parameters
 * @n: number of parameters
 * @...: variables to calculate the sum
 *
 * Return: if n = 0, return 0
 *		otherwise the sum of the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list numbers;

	if (n == 0)
	{
		return (0);
	}
	va_start(numbers, n);
	for (i = 0; i < n ; i++)
		sum = sum + va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
