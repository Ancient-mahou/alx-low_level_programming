#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: Pointer to the file
 * @text_content: WEhat to write inside
 * Return: Success or failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int wrte;
	int file_len;

	file_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (file_len = 0; text_content[file_len];)
		{
			file_len++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wrte = write(file, text_content, file_len);

	if (file == -1 || wrte == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
