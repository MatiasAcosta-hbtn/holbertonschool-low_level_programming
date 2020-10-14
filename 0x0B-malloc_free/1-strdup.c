#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - create an array and copy from str
 *  @str: the source to copy
 * Return: the array
 */
char *_strdup(char *str)
{
	int cont = 0, i = 0;
	char *c;

	if (str == NULL)
		return (NULL);
	while (str[cont] != '\0')
	{
		cont++;
	}
	c = (char *) malloc(sizeof(char) * cont + 1);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < cont; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
