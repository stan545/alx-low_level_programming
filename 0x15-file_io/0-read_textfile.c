#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nlettersRead, nlettersWritten;
	int fd;
	char *text;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);

	nlettersRead = read(fd, text, letters);
	if (nlettersRead == -1)
		return (0);

	text[letters + 1] = '\0';
	close(fd);

	nlettersWritten = write(STDOUT_FILENO, text, nlettersRead);
	if (nlettersWritten == -1)
		return (0);

	free(text);

	return (nlettersRead);
}
