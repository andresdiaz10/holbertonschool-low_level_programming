#include "holberton.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to overwrite
 * @src: String that will be appended to de end of dest
 *
 * Return: Concatenate string
 */

char *_strcat(char *dest, char *src)
{
	int h;
	int i;
	int j;

	for (i = 0 ; *(dest + i) != '\0' ; i++)
		;
	for (j = 0 ; *(src + j) != '\0' ; j++)
	{
		*(dest + i + j) = *(src + j);
	}
	*(dest + i + j) = '\0';
	return (dest);
}
