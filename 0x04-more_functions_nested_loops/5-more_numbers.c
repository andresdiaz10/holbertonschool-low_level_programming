#include "holberton.h"

/**
 * void more_numbers - Print 10 times
 */

void more_numbers(void)
{
	int i;
	int number;

	for (i = 0 ; i < 10 ; i++)
	{
		for (number = 0 ; number < 15 ; number++)
		{
			if (number > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
