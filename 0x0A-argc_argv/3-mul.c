#include <stdio.h>
#include <stdlib.h>
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
	if (argc == 1 || argc >= 4)
	{
		printf("%s\n", "Error");
	}
	else
	{
	    printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
