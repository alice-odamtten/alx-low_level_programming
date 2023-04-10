#include "main.h"
#include <string.h>
#include <stdio.h>

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
	ssize_t count;

	fp = open("filename", O_RDONLY);
	if (fp == -1)
	{
		return (0);
		exit(1);
	}

	ch = malloc(letters * sizeof(char));
	if (ch == NULL)
	{
		return (0);
	}

	r = read(ch, letters, fp);
	if (r == -1)
	{
		return (0);
		exit(1);
	}
	t = write(1, ch, r);
	if (t == -1)
	{
		return (0);
		exit(1);
	}

	close(fp);
	free(ch);

	return (wr);
}
