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
	char *arr;
	size_t size_str = 0;
	size_t i = 0;

	for (i = 0 ; *(str + i)  != '\0' ; i++)
		size_str++;
	arr = (char *)malloc(size_str * sizeof(char));
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
	free(arr);
}
