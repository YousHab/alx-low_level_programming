#include "main.h"
/**
 * check_file - checks if files can be opened.
 * @file_from: file source.
 * @file_to: destination..
 * @argv: arguments
 * Return: nothig.
 */
void check_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main program.
 * @argc: number of arguments.
 * @argv: arguments .
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, error;
	ssize_t buffsize, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);

	buffsize = 1024;
	while (buffsize == 1024)
	{
		buffsize = read(file_from, buffer, 1024);
		if (buffsize == -1)
			check_file(-1, 0, argv);
		nwr = write(file_to, buffer, buffsize);
		if (nwr == -1)
			check_file(0, -1, argv);
	}

	error = close(file_from);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
