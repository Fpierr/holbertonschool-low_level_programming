#include "main.h"

#define BUFFER_SIZE 1024

int *open_file(const char *src_file, const char *dest_file);
void copy_file_content(int file_from, int file_to);
void close_file(int *file_d);

/**
 * open_file - open source and destination file
 * @src_file: the file name source
 * @dest_file: the file destination name
 *
 * Return: an array of two integer that content the file descripotors
 */
int *open_file(const char *src_file, const char *dest_file)
{
	int *fd;

	fd = malloc(sizeof(int) * 2);
	if (fd == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Memory allocation failed\n");
		exit(100);
	}

	fd[0] = open(src_file, O_RDONLY);
	if (fd[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				src_file);
		exit(98);
	}

	fd[1] = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				dest_file);
		exit(99);
	}
	return (fd);
}
/**
 * copy_file_content - copy the contents of a file source to dest file
 * @file_from: file descriptor of the source file
 * @file_to: the file descriptor of the destination file
 *
 * Return: void
 */
void copy_file_content(int file_from, int file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	do {
		r = read(file_from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %d\n",
					file_from);
			exit(98);
		}

		w = write(file_to, buffer, r);
		if (w == -1 || r != w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %d\n",
					file_to);
			exit(99);
		}
	} while (r > 0);
}
/**
 * close_file - close the source and destination files
 * @file_d: the file descriptor to close
 *
 * Return: void
 */
void close_file(int *file_d)
{
	if (close(file_d[0]) == -1 || close(file_d[1]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				file_d[0]);
		exit(100);
	}
	free(file_d);
}
/**
 * main - Entry point main
 * @argc: the number of arguments passed to the program
 * @argv: the array of the string that content arguments
 *
 * Return: 0 on success, or an error code on faillure
 */
int main(int argc, char *argv[])
{
	int *fd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n" "Usage: cp file_from file_to");
		exit(97);
	}

	fd = open_file(argv[1], argv[2]);
	copy_file_content(fd[0], fd[1]);
	close_file(fd);

	return (0);
}
