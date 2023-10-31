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
	int fds;
	ssize_t count, counts;
	char *buffer;

	if (!filename)
		return (0);
	fds = open(filename, O_RDONLY);
	if (fds == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	count = read(fds, buffer, letters);
	counts = write(STDOUT_FILENO, buffer, count);
	close(fds);
	free(buffer);
	return (counts);
}
