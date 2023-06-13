#include "main.h"

/**
 * append_text_to_file - it appends text at the end of a file.
 * @filename: it is the pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, q, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	q = write(p, text_content, lens);

	if (p == -1 || q == -1)
		return (-1);

	close(p);

	return (1);
}
