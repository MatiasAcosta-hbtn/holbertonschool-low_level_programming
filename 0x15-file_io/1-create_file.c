#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int file, letters, bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY, 0600);
	while(*(text_content + letters))
		letters++;
	bytes = write(file, text_content, letters + 1)
	if(bytes == -1 || file == -1)
	{
		write(1, "fails", 5);
		return (-1);
	}
	return (1);
}
