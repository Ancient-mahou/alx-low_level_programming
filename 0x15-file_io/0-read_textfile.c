#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int zb;
	ssize_t nerd, anwr;
	char *bufx;

	if (!filename)
		return (0);

	zb = open(filename, O_RDONLY);

	if (zb == -1)
		return (0);

	bufx = malloc(sizeof(char) * (letters));
	if (!bufx)
		return (0);

	nerd = read(zb, bufx, letters);
	anwr = write(STDOUT_FILENO, bufx, nerd);

	close(zb);

	free(bufx);

	return (anwr);
}
