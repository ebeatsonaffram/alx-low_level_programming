#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - This should take a text
 * file and display to the POSIX standard output.
 * @filename: indicates name of the file to to take.
 * @letters: shows the number of letters it
 * should read and print.
 * Return: return the actual number of
 *  letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int df;
	ssize_t lenrad, lenwidth;
	char *cushion;

	if (filename == NULL)
		return (0);
	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	cushion = malloc(sizeof(char) * letters);
	if (cushion == NULL)
	{
		close(df);
		return (0);
	}
	lenrad = read(df, cushion, letters);
	close(df);
	if (lenrad == -1)
	{
		free(cushion);
		return (0);
	}
	lenwidth = write(STDOUT_FILENO, cushion, lenrad);
	free(cushion);
	if (lenrad != lenwidth)
		return (0);
	return (lenwidth);
}
