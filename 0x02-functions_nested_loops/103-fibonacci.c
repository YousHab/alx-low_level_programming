#include <stdio.h>
/**
  * main - sum even fibonacci numbers under 4 million.
  * Return: 0
  */
int main(void)
{
	unsigned long i, a, b, c, sum;

	a = sum = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
