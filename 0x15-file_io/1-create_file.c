#include "main.h"
/**
 * create_file - A function tha creates afile
 * @filename: The file to create
 * @text_content: the file content
 *
 * Return: Always 1
 **/

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t t;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_TRUSR | S_TWUSR);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		t = write(fp, text_content, strlen(text_content));
		if (t == -1)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
