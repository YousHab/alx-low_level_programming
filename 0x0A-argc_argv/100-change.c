#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - A program that prints the minimum number of coins to make
 * change fo an amount of money.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0, 1 if there is an error.
 */

int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int d = atoi(argv[1]);
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		while (d != 0)
		{
			if (d / coins[i] != 0)
			{
				change += (d / coins[i]);
				d %= coins[i];
				i++;
			}
			else
				i++;
		}
	printf("%d\n", change);
	return (0);
}
