#include "main.h"
#include <stdlib.h>
#include <stdio.h>


ssize_t read_textfile(const char *filename, size_t letters)
{
	char ch;
	ssize_t count = 0;
	FILE *fp = NULL;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (!foef(fp))
	{
		ch = fgetc(fp);
		fprintf("%c", ch);
	}

	fclose(fp);


}
