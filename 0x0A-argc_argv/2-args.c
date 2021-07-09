#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Number of command line arguments
 * @argv: Array of the command line arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
