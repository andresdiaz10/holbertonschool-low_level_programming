#include "holberton.h"
/**
 * rev_string - Reverse
 * @s: gebi
 */
void rev_string(char *s)
{
	int i, j, count = 0;
	char aux[1000];

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for (i = 0 ; i < count ; i++)
	{
		aux[i] = s[j];
		j--;
	}
	for (i = 0 ; i < count ; i++)
	{
		s[i] = aux[i];
	}
}
