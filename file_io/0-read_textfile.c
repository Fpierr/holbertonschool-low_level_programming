#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @letters: the number of letters it should read and print
 * @filename: the name of the file will be read
 *
 * Return: the actual number of letters to read and prit or 0 if it fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(o);
		return (0);
	}

	r = read(o, buffer, letters);
	if (r == -1)
	{
		close(o);
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		close(o);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
