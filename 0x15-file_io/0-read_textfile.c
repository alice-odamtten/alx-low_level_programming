#include "main.h"

/**
 * read_textfile - reads a content of a file
 *
 * @filename: File to be opened
 * @letters: Number of letterss to read
 * Return: Always the actual number of char printed
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, r, t;
	char *ch;

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	ch = malloc((letters + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (0);
	}

	r = read(fp, ch, letters);
	if (r == -1)
	{
		close(fp);
		free(ch);
		return (0);
	}
	ch[r] = '\0';

	t = write(1, ch, r);
	if (t == -1)
	{
		close(fp);
		free(ch);
		return (0);
	}
	close(fp);
	free(ch);
	return (t);
}
