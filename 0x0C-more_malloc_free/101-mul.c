#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_positive_integer - fct tha klfsj
 * @str: kfdlkg
 *
 * Return: 1 or 0.
 */

int is_positive_integer(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * main - hsglqkn
 * @argc: lgjdmls
 * @argv: ljsdgmds
 *
 * Return: 0 98.
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];

	if (!(is_positive_integer(num1) && is_positive_integer(num2)))
	{
		printf("Error\n");
		return (98);
	}

	result = atoi(num1) * atoi(num2);
	printf("%d\n", result);

	return (0);
}
