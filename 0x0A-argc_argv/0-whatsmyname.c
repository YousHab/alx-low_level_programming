#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 *
 * @argc: number of parameters.
 * @argv: arguments
 *
 * Return: 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
