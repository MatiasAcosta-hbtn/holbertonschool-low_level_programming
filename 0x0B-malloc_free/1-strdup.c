#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -
 *  @str:
 * Return:
 */

char *_strdup(char *str)
{
	int cont = 0, i = 0;
	char *c;

	while(*(str + cont) != 0)
		cont++;
	if (cont == 0)
		return NULL;
	c = malloc(sizeof(char) * cont);
	for (i = 0; i < cont; i++)
	{
		c[i] = str[i];
	}
	return (c);
}
