#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: text to append
 *
 * Return: 1 succeessful otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, i;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			i = write(fd, text_content, n);
	}
		if (i == -1)
			return (-1);

		close(fd);
		return (1);

}
