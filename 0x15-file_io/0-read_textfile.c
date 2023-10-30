#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * real_textfile - prints on POSIX
 * @filename: name of file
 * @letters: number of charaters to print
 *
 * Return: Actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t count = 0;
	ssize_t i;
	int fd;


	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	i = read(fd, buffer, letters);

	if (i == -1)
	{
		free(buffer);
		return (0);
	}

	count = write(STDOUT_FILENO, buffer, i);

	if (i != count)
		return (0);

	free(buffer);

	close(fd);


	return (count);

}
