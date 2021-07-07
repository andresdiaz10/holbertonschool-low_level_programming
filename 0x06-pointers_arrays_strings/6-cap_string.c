#include "holberton.h"
/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	char *aux;

	for (aux = str ; *aux != '\0' ; aux++)
	{
		if (*aux >= 'a' && *aux <= 'z')
		{
			if (*(aux - 1) == 9 || *(aux - 1) == 10)
				*aux -= 32;
			else if (*(aux - 1) >= 32 && *(aux - 1) <= 34)
				*aux -= 32;
			else if (*(aux - 1) == 40 || *(aux - 1) == 41)
				*aux -= 32;
			else if (*(aux - 1) == 44 || *(aux - 1) == 46)
				*aux -= 32;
			else if (*(aux - 1) == 59 || *(aux - 1) == 63)
				*aux -= 32;
			else if (*(aux - 1) == 123 || *(aux - 1) == 125)
				*aux -= 32;
		}
	}
	return (str);
}
