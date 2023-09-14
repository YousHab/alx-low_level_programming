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
	for (i = 0; i < 100; i++)
	{
		if (i > 2)  
			if ((i % 3 == 0) && (i % 5 == 0))
				printf("Fizz Buzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
		printf("%d ", i);
	}
	printf("\n");
}
