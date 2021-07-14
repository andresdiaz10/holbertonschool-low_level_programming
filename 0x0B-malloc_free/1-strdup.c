#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: String to duplicate
 *
 * Return: str duplicate
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *arr = malloc(sizeof(str));

	if (!(str))
		return ('\0');
	if (arr)
	{
		while (i < sizeof(str) + 1)
		{
			*(arr + i) = *(str + i);
			i++;
		}
		return (arr);
	}
	else
		return ('\0');
}
