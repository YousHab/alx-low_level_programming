#include <stdio.h>
/**
 * is_prime - fucntion that test if an integer n is prime or not.
 *
 * @n: the integer ro be tested.
 *
 * Return: 1 if n is a prime, 0 else.
 */

int is_prime(int n)
{
	int i;

	if (n == 0)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}


/**
 * main - prints the largest prime factor of the number 612852475143 .
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;
	long int j = 0;

	for (i = 2; i <= n; i++)
	{
		if (is_prime(i) == 1)
		{
			j = i;
			while ((n % j == 0) && (n != j))
			{
				n = n / j;
			}
		}
		else
			continue;
	}
	printf("%ld\n", n);
	return (0);
}
