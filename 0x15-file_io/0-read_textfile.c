#include "holberton.h"
/**
 * read_textfile - read a file
 * @filename: name of the file
 * @letters: the amount letters to read
 * Return: the amount of bytes readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file;
	ssize_t bytes_r, bytes_w;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	bytes_r = read(file, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_r == -1 || bytes_w == -1 || file == -1)
	{
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (bytes_w);
}
