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
	int fp, count, t;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC | 0600);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count] != '\0')
		{
			count++;
		}
		t = write(fp, text_content, count);
		if (t == -1)
		{
			close(fp);
			return (-1);
		}
	}
	else
	{
		close(fp);
		return (-1);
	}

	close(fp);
	return (1);
}
