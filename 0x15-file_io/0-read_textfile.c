#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: a pointer to the file
 * @letters: letters.
 *
 * Return: the actual number of letters it could read and print
 * 0 if the file can't be opened or read or if filename is NULL.
 * 0 if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	ssize_t count;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	n = open(filename, O_RDONLY);
	if (n == -1)
	{
		return (0);
	}
	count = read(n, &buffer[0], letters);
	count = write(STDOUT_FILENO, &buffer[0], bytes);
	close(n);
	return (count);

}
