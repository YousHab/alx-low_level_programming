#include "main.h"
/**
 * pow - function that calculate the power of a number by another number.
 *
 * @n: the base.
 * @m: the exponent.
 *
 * Return: the result.
 */

int power(int n, int m)
{
	if (m == 0)
		return (1);
	else
		return ( n * power(n, m-1));
}

/**
 * size - calculate the size of a string.
 * @n: the string to be calculated.
 * Return: The lenght of the string.
 */

int size(char *n)
{
	int i = 0;

	while (n[i] != '\0')
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
	int i = 0, j; 
	int cv_n = 0;
	int n[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char nc[10] = "0123456789";
	int size_m;

	size_m = size(m);
	while (m[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (m[i] == nc[j])
			{
				cv_n += n[j] * power(10, (size_m - i - 1));
				
			}
		}
		i++;
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
	int size1, size2;

	converted_n1 = convert(n1);
	converted_n2 = convert(n2);

	res = converted_n1 + converted_n2;

	size1 = size(n1);
	size2 = size(n2);

	if (size1 > size_r || size2 > size_r)
		return (0);

	while (res != 0)
	{
		a = res % 10;
		for (j = 0; j < 10; j++)
		{
			if (a == n[j])
			{
				r[szrv] = nc[j];
			}
		}
		szrv++;
		res /= 10;
	}
	if (szrv > size_r)
		return (0);

	else
	{
		r[szrv] = '\0';
		for (i = 0; (i < szrv / 2); i++)
		{
			tmp = r[i];
			r[i] = r[szrv - i - 1];
			r[szrv - i - 1] = tmp;
		}
		return (r);
	}
}
