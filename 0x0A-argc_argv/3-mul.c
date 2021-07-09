#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		printf("%s\n", "Error");
	else if (strspn(argv[1], "0123456789") == strlen(argv[1]) &&
			strspn(argv[2], "0123456789") == strlen(argv[2]))
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		int result = x * y;

		printf("%i\n", result);
	}
	else
		printf("%s\n", "Error");
	return (0);
}
