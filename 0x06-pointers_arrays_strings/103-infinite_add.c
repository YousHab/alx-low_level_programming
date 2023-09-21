#include "main.h"
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

long long int convert(char *m)
{
	int i = 0;
	long long int cv_n = 0;
	int f = 1;

	if (m[0] == '-')
	{
		f = -1;
		i = 1;
	}

	while (m[i] != '\0')
	{
		if (m[i] >= '0' && m[i])
		{
			cv_n = cv_n * 10 + (m[i] - '0');
		}
		i++;
	}

	return (cv_n * f);
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
	long long int converted_n1, converted_n2, res, a;
	char tmp;
	int szrv = 0, size1 = size(n1), size2 = size(n2);

	converted_n1 = convert(n1);
	converted_n2 = convert(n2);
	res = converted_n1 + converted_n2;

	if (size1 >= (size_r - 1) || size2 >= (size_r - 1))
		return (0);
	while (res != 0)
	{i
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
	r[szrv] = '\0';
	for (i = 0; (i < szrv / 2); i++)
	{
		tmp = r[i];
		r[i] = r[szrv - i - 1];
		r[szrv - i - 1] = tmp;
	}
	return (r);
}
