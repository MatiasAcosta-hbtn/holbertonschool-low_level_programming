#include "holberton.h"
/**
 * _strncpy - function that append the contain in src in the buffer of dest
 * @dest: the destination to append
 * @src: the text to copy
 * @n: the numbers of bytes to copy
 * Return: a char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, j = 0, k = 0;

	while (*(src + len))
		len++;
	if (len > n)
	{
		for (j = 0; j < n; j++)
			dest[j] = src[j];
	}
	else
	{
		while (*(src + k) != 0)
		{
			dest[k] = src[k];
			k++;
		}
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (dest);
}
