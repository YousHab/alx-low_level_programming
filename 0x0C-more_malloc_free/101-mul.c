#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	long int num1, num2, result, i, j = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < 3; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}
