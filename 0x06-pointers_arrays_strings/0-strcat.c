#include "holberton.h"

/**
 * _strcat - function that append the contain in src in the buffer of dest
 * @dest: the destination to append
 * @src: the text to copy
 * Return: a char pointer
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len) != 0)
		len++;
	while (*(src + i) != 0)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i + 1] = '\0';
	return (dest);
}
