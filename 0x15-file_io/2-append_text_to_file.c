#include "main.h"

/**
 * append_text_to_file - a function used to append into a file
 *
 * @filename: The file
 * @text_content: the content to append
 *
 * Return: Always integer
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, r;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY  | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		r = 0;
		while (text_content[r] != '\0')
		{
			r++;
		}

		if (write(fp, text_content, r) != r)
		{
			close(fp);
			return (-1);
		}
	}

	close(fp);
	return (1);
}
