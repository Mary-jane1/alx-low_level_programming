#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- it is a read text file print to STDOUT.
 * @filename: a text file being read
 * @letters: the number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufs;
	ssize_t fp;
	ssize_t q;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bufs = malloc(sizeof(char) * letters);
	t = read(fp, bufs, letters);
	q = write(STDOUT_FILENO, bufs, t);

	free(bufs);
	close(fp);
	return (q);
}
