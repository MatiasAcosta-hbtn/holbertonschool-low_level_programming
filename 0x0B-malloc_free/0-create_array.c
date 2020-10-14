#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: the size of char
 * @c: the char
 * Return: the array of char
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(size);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
