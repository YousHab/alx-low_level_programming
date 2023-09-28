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
	if (n < 0)
		return (-1);
	return (helper(n, 2));
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
	if (n % i == 0)
		return (-1);
	if (n / i == 0)
		return (-1);
	if (i == n)
		return (0);
	return (helper(n, i + 1));
}
