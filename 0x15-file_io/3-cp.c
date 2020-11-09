#include "holberton.h"
#include <stdio.h>

void close_file(int file)
{
	int c;

	c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

int main(int argc, char *argv[])
{
	int from, to, byte_r, byte_w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	byte_r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	do
	{
		if (from == -1 || byte_r == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		byte_w = write(to, buffer, byte_r);
		if (to == -1 || byte_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		byte_r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (byte_r > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
