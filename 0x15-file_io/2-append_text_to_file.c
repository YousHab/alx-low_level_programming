#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: the file.
 * @text_content: Null terminated string to add at the end of file
 *
 * Return: 1 on success.
 * -1 on failure, if filename NULL, if the file does not exist.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fds;
	int ltrs;
	int rwr;

	if (filename == NULL)
		return (-1);

	fds = open(filename, O_WRONLY, O_APPEND);

	if (fds == -1)
		return (-1);
	if (text_content != NULL)
	{
		rwr = write(fds, text_content, ltrs);
		if (rwr == -1)
			return (-1);
	}
	close(fds);
	return (1);
}
