#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of the operation
 * @argc: number of the arguments in the terminal
 * @argv: pointer of the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *op;

	(void)argc;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	if (op[1] != '\0' || !(get_op_func(op)))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
