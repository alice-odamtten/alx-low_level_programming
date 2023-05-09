#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename:  File name
 * @text_content: Variable
 * Return: Always success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
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
	n = write(fp, text_content, _strlen(text_content));
	if (n < count)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);
}

/**
 * _strlen - Checks string length
 * @s: Variable to check string length
 * Return: Always number counted
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
