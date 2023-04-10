#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fad;
	int nzletters;
	int raawr;

	if (!filename)
		return (-1);

	fad = open(filename, O_WRONLY | O_APPEND);

	if (fad == -1)
		return (-1);

	if (text_content)
	{
		for (nzletters = 0; text_content[nzletters]; nzletters++)
			;

		raawr = write(fad, text_content, nzletters);

		if (raawr == -1)
			return (-1);
	}

	close(fad);

	return (1);
}
