#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0.
 *
 */

int main(void)
{
	int i, n;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			if (i % 5 == 0)
				printf("FizzBuzz ");
			else
				printf("Fizz ");
		else
			printf("%d ", i);
	}
	printf("\n");
}
