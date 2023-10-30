#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char ch;
	ssize_t count = 0;
	FILE *fp = NULL;

	letters += 0;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (!feof(fp))
	{
		ch = fgetc(fp);
		printf("%c", ch);
		count++;
	}

	fclose(fp);


	return (count);

}
