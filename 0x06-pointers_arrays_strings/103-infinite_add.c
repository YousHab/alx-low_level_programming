#include "main.h"
/**
 * size - calculate the size of a string.
 * @n: the string to be calculated.
 * Return: The lenght of the string.
 */

int size(char *n)
{
	int i = 0;

	while (n[i] != '\n')
		i++;
	return (i);
}

/**
 * convert - this function converts a string to a number.
 *
 * @m: the string to be converted
 *
 * Return: the converted integer.
 */

int convert(char *m)
{
	int i = 0, j, cv_n;
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char nc[10] = "0123456789";
	int size_m;

	size_m = size(m);
	while (m[i] != '\0' && m[i] <= '9' && m[i] >= '0')
	{
		for (j = 0; j < 10; j++)
		{
			if (m[i] == nc[j])
			{
				cv_n += n[j] * (10 ^ (size_m - i - 1));
			}
		}
	}
	return (cv_n);
}

/**
 * infinite_add - This function adds two numbers.
 *
 * @n1: the first number.
 * @n2: the second number.
 * @r: The buffer that the function will use to store the result.
 * @size_r: the buffer size.
 *
 * Return: a pointer to the result.
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0;
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char nc[10] = "0123456789";
	int converted_n1;
	int converted_n2;
	int res;
	int a;
	char tmp;
	int szrv = 0;

	converted_n1 = convert(n1);
	converted_n2 = convert(n2);

	res = converted_n1 + converted_n2;

	while (res != 0)
	{
		a = res % 10;
		res /= 10;
		for (j = 0; j < 10; j++)
		{
			if (a == n[j])
			{
				r[szrv] = nc[j];
			}
		}
		szrv++;
	}
	if (szrv > size_r)
		return (0);
	r[szrv] = '\0';
	i = 0;
	for (i = 0; (i = szrv / 2); i++)
	{
		tmp = r[i];
		r[i] = r[szrv - i - 1];
		r[szrv - i - 1] = tmp;
	}

	return (r);
}
