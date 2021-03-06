#include "holberton.h"

/**
 * binary_to_uint - convert a binary to an uint
 * @b: the binary
 * Return: the num
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, i = 0, len = 0;
	int c;

	if (b == '\0')
		return (0);
	while (*(b + len))
		len++;

	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			i += k;
		k *= 2;
	}
	return (i);
}
