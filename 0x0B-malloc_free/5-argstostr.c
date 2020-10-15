#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - return a char with all the values of passed in main
 * @ac: count of ac
 * @av: array of char
 * Return: the pointer
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0, j = 0, aux = 0, total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		for (j = 0; av[i][j] != 0; j++)
		{
			total++;
		}
		total++;
	}
	p = (char *)malloc(sizeof(char) * total + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			p[aux] = av[i][j];
			aux++;
		}
			p[aux] = '\n';
			aux++;
	}
	return (p);
}
