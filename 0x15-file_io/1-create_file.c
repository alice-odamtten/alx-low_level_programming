#include "main.h"

/**
 * create_file - creates a new file
 * @filename: The name of the file
 * @text_content: The content of the file
 * Return: Always an int
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bw;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bw = write(f, text_content, strlen(text_content));
		if (bw == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
