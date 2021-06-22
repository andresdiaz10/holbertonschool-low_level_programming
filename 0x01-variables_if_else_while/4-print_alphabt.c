#include <stdio.h>
/**
 * main - Print all lethers in lowercase except q and e
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
