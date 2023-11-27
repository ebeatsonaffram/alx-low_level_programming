#include "main.h"
/**
 * append_text_to_file - attaches text at
 *  the end of a file
 * @filename: indicates the filename.
 * @text_content: adds the  content.
 * Return: fetch 1 if the file exists. 
 * -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int df;
	int numlet;
	int readwrite;

	if (!filename)
		return (-1);

	df = open(filename, O_WRONLY | O_APPEND);

	if (df == -1)
		return (-1);

	if (text_content)
	{
		for (numlet = 0; text_content[numlet]; numlet++)
			;

		readwrite = write(df, text_content, numlet);

		if (readwrite == -1)
			return (-1);
	}

	close(df);

	return (1);
}
