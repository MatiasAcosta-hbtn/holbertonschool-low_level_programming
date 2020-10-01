#include "holberton.h"

/**
 * _strcmp - function that append the contain in src in the buffer of dest
 * @dest: the destination to append
 * @src: the text to copy
 * Return: a char pointer
 */

int _strcmp(char *s1, char *s2)
{
	while((*s1 == *s2)  && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
