#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that performs a simple operations.
 *
 * @argc: number of arguments
 * @argv: array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (n2 == 0))
	{
		printf("Error\n");
		exit(99);
	}

	result = op(n1, n2);

	printf("%d\n", result);

	return (0);
}
