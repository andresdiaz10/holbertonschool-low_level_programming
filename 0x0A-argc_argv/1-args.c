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
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
