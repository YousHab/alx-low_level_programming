#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers.
 *
 * @argc: number of arguments.
 * @argv: a list of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int m;

	if (argc == 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
		printf("Error\n");
	return (0);
}
