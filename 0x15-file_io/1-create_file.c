#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: what to wrie into file
 * Return: 1 successful
 */

int create_file(const char *filename, char *text_content)
{
	int i, n, fd;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	for (n = 0; text_content[n] ; n++)
		i = write(fd, text_content, n);

	if (i == -1)
		return (-1);

	close(fd);
	return (1);





}
