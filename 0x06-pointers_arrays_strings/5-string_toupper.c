#include "holberton.h"

/**
 * string_toupper - Upper all character of a String
 * @str: String to upper
 * Return: String
 */

char *string_toupper(char *str)
{
	char *aux;

	for (aux = str ; *aux != '\0' ; aux++)
	{
		if (*aux >= 'a' && *aux <= 'z')
			*aux -= 32;
	}
	return (str);
}
