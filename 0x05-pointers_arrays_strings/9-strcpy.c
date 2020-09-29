#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copy a pointer includin the '\0'
 * @dest: the destination
 * @src: from this src
 * Return: the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
	*dest = *src;
	dest++;
	src++;
}
	*dest = '\0';
	return (start);
}
