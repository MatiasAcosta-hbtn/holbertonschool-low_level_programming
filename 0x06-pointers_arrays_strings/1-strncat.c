#include "holberton.h"

/**
 * _strncat - function that append the contain in src in the buffer of dest
 * @dest: the destination to append
 * @src: the text to copy
 * @n: the count of bytes to copy
 * Return: a char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (*(dest + len) != 0)
		len++;
	while (*(src + i) != 0)
	{
		if (i == n)
			break;
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}
