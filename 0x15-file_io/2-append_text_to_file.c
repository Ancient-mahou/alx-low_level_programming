#include "main.h"

/**
 * append_text_to_file - append text to the file
 * @filename: filename
 * @text_content: what to append to the end
 * Return: 1 if success or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, n_write, i = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		n_write = write(file, text_content, i);
		if (n_write == -1 || n_write != i)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
