#include "holberton.h"
/**
 * _strlen - Lenght of the string
 * @s: string
 *
 * Return: String lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
