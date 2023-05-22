#include "main.h"

/**
 * read_textfile - read and display a file
 * @filename: to read
 * @letters: Number of bytes
 * Return: 0 or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t valeur, l_write, l_read;

	valeur = open(filename, O_RDONLY);

	if (valeur == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	l_read = read(valeur, buf, letters);

	l_write = write(STDOUT_FILENO, buf, l_read);

	free(buf);

	close(valeur);

	return (l_write);
}
