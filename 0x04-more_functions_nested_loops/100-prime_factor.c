#include <stdio.h>
/**
 * is_prime - verify if a integer is prime
 * @n: the number to be tested
 *
 * Return: 1 if n is a prime number, 0 esle.
 *
 */


int is_prime(int n)
{
	int i;

	if (n == 1)
		return (1);
	else if (n <= 0)
		return (0);

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);

}
/**
 * main - the main program.
 *
 * Return: 0
 *
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (i)
	{
		if (is_prime(i) == 1)
		{
			while ((n % i) == 0)
			{
				if (n / i != 1)
				{
					n = n / i;
					printf("%ld ,", i);
				}
				else
					n = n / i;
					printf("%ld", i);
					break;
			}
		}
		i++;
	}
	return (0);
}
