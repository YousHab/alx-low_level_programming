#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A program that adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: array of arguments.
 *
 * Return: 1 if there is an error, 0 else.
 */

int main(int argc, char *argv[])
{
	int i;

	unsigned int long j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
