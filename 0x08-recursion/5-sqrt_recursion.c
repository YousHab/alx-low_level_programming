#include "main.h"
/**
 * helper - finds the natural square root of a number.
 *
 * @n: The number.
 * @i: iteration number.
 *
 * Return: The result.
 */

int helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns square root of a number.
 *
 * @n: the number in input.
 *
 * Return: the square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0));
}
