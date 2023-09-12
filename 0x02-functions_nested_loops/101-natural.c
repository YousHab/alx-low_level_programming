#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below 1024.
  * Return: 0
  */

int main(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 1024 ; i++)
	{
		int a = i % 3;
		int b = i % 5;

		if (a == 0 || b == 0)
			n += i;
	}
	printf("%d", n);
	return (0);
}
