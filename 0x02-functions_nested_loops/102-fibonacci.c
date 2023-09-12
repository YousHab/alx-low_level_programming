#include <stdio.h>
/**
  * main - print the first 50 fibonacci numbers.
  * Return: 0
  */
int main(void)
{
	unsigned long i, a, b, c;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (i == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}
