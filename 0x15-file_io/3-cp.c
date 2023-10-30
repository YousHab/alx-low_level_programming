#include "main.h"
/**
 * main - program that copies the content of a file to another.
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: 0.
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
		exit(97);
	printf("Usage: cp file_from file_to");

	fd1 = open(argv[1], ...);
	if (fd1 == -1)
		exit(98);
	
}
