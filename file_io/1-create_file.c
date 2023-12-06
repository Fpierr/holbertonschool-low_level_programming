#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file will be create
 * @text_content: the text that content the file
 *
 * Return: 1 on success, or -1 on faillure or if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
