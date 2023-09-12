#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 50; i++)
	{
		j = 2;

		for (j = 2; j < i; j++)
		{
			if (i % j != 0)
				printf("%d, ", i);
		}
	}
	printf("\n");
	return (0);
}
