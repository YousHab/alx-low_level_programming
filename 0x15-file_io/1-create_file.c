#include "main.h"
/**
 * create_file - function that creates a file.
 *
 * @filename: a pointer to the file.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success. -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fds;
	int ltrs;
	int rwr;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fds = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);

	if (fds == -1)
		return (-1);

	ltrs = strlen(text_content);
	rwr = write(fds, text_content, ltrs);

	if (rwr == -1)
		return (-1);

	close(fds);
	return (1);
}
