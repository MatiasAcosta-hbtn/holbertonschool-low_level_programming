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
	ssize_t bytes;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (!filename || letters < 0)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	bytes = read(file, buffer, letters);
	if (bytes == -1)
		return (0);
	bytes = write(1, buffer, bytes);
	if (bytes == -1)
		return (0);
	close(file);
	free(buffer);
	return (bytes);
}
