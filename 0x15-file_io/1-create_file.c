#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int file, letters = 0, bytes = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while(*(text_content + letters))
			letters++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes = write(file, text_content, letters + 1);
	if(bytes == -1 || file == -1)
		return (-1);
	close(file);
	return (1);
}
