#include "3-calc.h"

/**
 * main - program that performs a simple operations.
 *
 * @argc: number of arguments
 * @argv: array of arguments.
 *
 * Return: 0.
 */

int main(int argc, int *argv[])
{
	int n1, n2, result;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);

	result = op(n1, n2);

	printf("%d\n", result);

	return (0);
}


