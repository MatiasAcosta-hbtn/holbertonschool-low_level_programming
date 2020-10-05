#include "holberton.h"
/**
 * _memset - fill the bytes with a constant
 * @s: String
 * @b: constant
 * @n: number of bytes
 *
 * Return: the pointer to string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
