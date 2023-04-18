#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always an imt
 */

#define buf_size 1024
void error_msg(char *error, char *file, int ec);

int main(int argc, char *argv[])
{
	char *file_from = argv[1], *file_to = argv[2], b[buf_size];
	ssize_t d, t;
	int ff, ft;

	if (argc != 3)
	{
		error_msg("Usage: %s file_from file_to\n", argc[0], 97);
	}

	ff = open(file_from, O_RDONLY);
	if (ff == -1)
	{
		error_msg("Error: Can't read from file %s\n", file_from, 98);
	}
	ft = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ft == -1)
	{
		error_msg("Error: Can't write to %s\n", file_to, 99);
	}

	while ((d = read(file_from, b, buf_size)) > 0)
	{
		t = write(file_to, b, d);
		if (t != d)
		{
			error_msg("Error: Can't write to %s\n", file_to, 99);
		}
	}
	if (d == -1)
	{
		error_msg("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(file_from) == -1)
	{
		error_msg("Error: Can't close fd %d\n", ff, 100);
	}

	if (close(file_to) == -1)
	{
		error_msg("Error: Can't close fd %d\n", ft, 100);
	}

	return (0);
}

/**
 * error_msg - Print error message
 * @error: A char variable
 * @file: Name of file
 * @ec: Integer variable
 */
void error_msg(char *error, char *file, int ec)
{
	dprintf(STDERR_FILENO, error, file);
	exit(ec);
}
