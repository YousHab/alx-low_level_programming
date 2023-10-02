#include <stdio.h>

/**
 * main - A progrme that prints the number of arguments passed into it.
 *
 * @argc: number of arguments.
 * @argv: list of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

