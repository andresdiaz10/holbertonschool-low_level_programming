#include "holberton.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to overwrite
 * @src: String that will be appended to de end of dest
 * @n: Maximum number of character to be appened
 * Return: Concatenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0 ; *(dest + i) != '\0' ; i++)
		;
	for (j = 0 ; (j < n && *(src + j) != '\0') ; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';
	return (dest);
}
