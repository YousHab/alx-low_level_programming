#include <stdio.h>

/**
 * main - the main program.
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 3;

	while (i < n / 2)
	{
		if ((n % i) == 0)
		{
			if ((i % 3) == 2)
				printf(",%lu ", i);
		}
		i += 2;
	}
	printf("\n");
	return (0);
}
