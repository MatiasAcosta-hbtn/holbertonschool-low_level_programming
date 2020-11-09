#include "holberton.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes = 0, bytes_w;

	file = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);
	while(*(text_content + bytes))
		bytes++;
	bytes_w = write(file, text_content, bytes);
	if (bytes_w == -1)
		return (-1);
	close(file);
	return (1);
}
