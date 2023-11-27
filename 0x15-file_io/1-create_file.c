#include "main.h"
/**
 * create_file - generate a file
 * @filename: this is the filename.
 * @text_content:this is the  content written in the file.
 * Return: fetch 1 if it succeeds else,
 * -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int numlet;
	int readwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
		;

	readwrite = write(fd, text_content, numlet);

	if (readwrite == -1)
		return (-1);

	close(fd);

	return (1);
}
