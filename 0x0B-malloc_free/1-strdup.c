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
	char *arr = "NULL";
	unsigned int i = 0;
	arr = malloc(sizeof(str) * sizeof(arr));

	if (!(str))
		return ('\0');
	if (arr)
	{
		for (i = 0 ; *(str + i) != '\0' ; i++)
			*(arr + i) = *(str + i);
		return (arr);
	}
	else
		return ('\0');
}
