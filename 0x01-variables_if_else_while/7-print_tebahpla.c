#include <stdio.h>
/**
 * main - Print the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char revAlphabet;

	for (revAlphabet = 'z' ; revAlphabet >= 'a' ; revAlphabet--)
	{
		putchar(revAlphabet);
	}
	putchar('\n');
	return (0);
}
