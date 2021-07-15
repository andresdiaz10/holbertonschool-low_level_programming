#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * string_size - Calculate the size of str
 * @str: String
 *
 * Return: The size of the array
 */

int string_size(char *str)
{
	size_t i;
	size_t size_str = 1;

	for (i = 0 ; *(str + i) != '\0' ; i++)
		size_str++;
	return (size_str);
}

/**
 * str_concat - Concatenate two strings
 * @s1: String base
 * @s2: string to add
 *
 * Return: Pointer arr
 */

char *str_concat(char *s1, char *s2)
{
	char *arr;
	int c, d;

	if (!(s1))
		s1 = "\0";
	if (!(s2))
		s2 = "\0";
	arr = (char *)malloc((string_size(s1) + string_size(s2) - 1) * sizeof(char));
	if (arr)
	{
		c = 0;
		while (*(s1 + c) != '\0')
		{
			*(arr + c) = *(s1 + c);
			c++;
		}
		d = 0;
		while (*(s2 + d) != '\0')
		{
			*(arr + c) = *(s2 + d);
			d++;
			c++;
		}
		return (arr);
	}
	else
	{
		return ('\0');
	}
	free(arr);
}
