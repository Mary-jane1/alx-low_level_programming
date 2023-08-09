#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it is the read text file print to STDOUT.
 * @filename: the text file being read
 * @letters: it is the number of letters to be read
 * Return: w- the actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(fd);
	return (w);
}
