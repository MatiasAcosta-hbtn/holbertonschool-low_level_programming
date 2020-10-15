#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function of calloc
 * @nmemb: count of membs
 * @size: size of membs
 * Return: the pointer to array of nmembs
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		((char*)p)[i] = 0;
	return (p);
}
