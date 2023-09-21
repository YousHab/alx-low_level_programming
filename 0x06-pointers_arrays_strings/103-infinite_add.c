#include "main.h"
#include <stdio.h>

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
	long long int converted_n1;
	long long int converted_n2;
	long long int res;
	long long int a;
	char tmp;
	int szrv = 0;
	int size1, size2;

	converted_n1 = convert(n1);
	converted_n2 = convert(n2);

	res = converted_n1 + converted_n2;

	size1 = size(n1);
	size2 = size(n2);

	if (size1 >= (size_r - 1) || size2 >= (size_r - 1))
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

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
	char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
	char r[100];
	char r2[10];
	char r3[11];
	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "1234567890";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	n = "999999999";
	m = "1";
	res = infinite_add(n, m, r2, 10);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	res = infinite_add(n, m, r3, 11);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
	}
	return (0);
}
