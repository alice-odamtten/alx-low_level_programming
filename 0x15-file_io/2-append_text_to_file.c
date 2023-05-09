#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename:  File name
 * @text_content: Variable
 * Return: Always success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, count = 0;
	ssize_t n;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	n = write(fp, text_content, count);
	if (n < count)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}
