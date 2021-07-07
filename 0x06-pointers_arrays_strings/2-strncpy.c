#include "holberton.h"
#include <stddef.h>
/**
 * _strncpy - Copies n characters from the string pointed
 * @dest: Where the content is to be copied
 * @src: String to be copied
 * @n: Number of characters to be copied
 *
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *aux = dest;
	int i = n;

	if (!dest || !src)
		return (dest);
	while (i != 0 && *src != '\0')
	{
		*aux++ = *src++;
		i--;
	}
	while (i != 0)
	{
		*aux++ = '\0';
		i--;
	}
	return (dest);
}
