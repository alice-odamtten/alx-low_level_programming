#include "main.h"
#include <string.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *ch;
	ssize_t count;

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
		exit(1);
	}

	ch = malloc(letters * sizeof(char));
	if (ch == NULL)
	{
		return (0);
	}
	
	while((fgets(ch, letters, fp)) != NULL)
	{
		printf("%S" , ch);
		count+= strlen(ch)
	}

	fclose(fp);
	free(ch);

	return (count);
}
