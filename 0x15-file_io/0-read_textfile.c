#include "holberton.h"

/**
 * read_textfile - function that reads.
 * @filename: pointer a file
 * @letters: letters is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t reader;
	ssize_t writer;
	int i;

	if (filename && letters)
		i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (-1);
	}
	else
	{
		buffer = malloc(sizeof(char) * letters);

		if (buffer)
		{
			reader = read(i, buffer, letters);
			close(i);
		}
		if (reader < 0)
		{
			free(buffer);
			return (0);
		}
		if (!reader)
			reader = letters;

		writer = write(STDOUT_FILENO, buffer, reader);
		free(buffer);

		if (writer < 0)
			return (0);
	}
	return (writer);
}
