#include "holberton.h"

/**
 * _strcmp - Compares two string
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 * Return: value < 0 s1 less than s2, value = 0 s1 equal s2 otherwise >0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
