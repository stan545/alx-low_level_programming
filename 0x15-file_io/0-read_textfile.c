#include "main.h"

/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nletters;
	int fd;
	char *text;
	if (!filename)
		return (0);
	text = malloc(sizeof(char) * letters + 1);
	if (text == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(text);
		return (0);
	}
	nletters = read(fd, text, sizeof(char) * letters);
	if (nletters == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	nletters = write(STDOUT_FILENO, text, nletters);
	if (nletters == -1)
	{
		free(text);
		close(fd);
		return (0);
	}
	free(text);
	close(fd);
	return (nletters);
}
