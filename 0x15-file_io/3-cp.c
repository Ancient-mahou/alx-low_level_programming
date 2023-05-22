#include "main.h"

/**
 * main - how to copy a file to another
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fromfd, tofd, read_status, write_status;
	char buffer[1024];
	mode_t md = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fromfd = open(argv[1], O_RDONLY);
	if (fromfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	tofd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, md);
	if (tofd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((read_status = read(fromfd, buffer, 1024)) > 0)
	{
		write_status = write(tofd, buffer, read_status);
		if (write_status == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (read_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fromfd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromfd), exit(100);

	if (close(tofd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tofd), exit(100);

	return (0);
}