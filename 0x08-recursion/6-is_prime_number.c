#include "main.h"
int helper(int n, int i);

/**
 * is_prime_number - Checks if a given number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if it is, 0 otherwise.
 *
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, n - 1));
}

/**
 * helper - checks if a given number n by iterating
 * recursevly i.
 *
 * @n: The number to be checked.
 * @i: The checking number.
 *
 * Return: 1 if it is a prime, 0 otherwise.
 */

int helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (helper(n, i - 1));
}
