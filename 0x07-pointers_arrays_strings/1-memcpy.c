#include "holberton.h"

/**
 * _memcpy - copy the bytes with a constant
 * @src: from this string
 * @dest: to this string
 * @n: number of bytes
 *
 * Return: the pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
