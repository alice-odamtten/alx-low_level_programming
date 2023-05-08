#include "main.h"

/**
 * read_textfile - REads a file
 * @filename: File to read from
 * @letters: Letters read
 * Return: Always successful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nr, nw;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		return (0);
	}
	buf = (char *)malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
	{
		close(f);
		return (0);
	}
	nr = read(f, buf, letters);
	if (nr == -1)
	{
		free(buf);
		close(f);
		return (0);
	}
	nw = write(STDOUT_FILENO, buf, nr);
	if (nw < nr)
	{
		free(buf);
		close(f);
		return (0);
	}
	free(buf);
	close(f);
	return (nr);
}
