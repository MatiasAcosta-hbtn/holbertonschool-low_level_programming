#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -
 * @ac:
 * @av:
 * Return:
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int i = 0, j = 0, aux = 0, total = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for(i = 0; i < ac; i++)
	{

		for(j = 0; av[i][j] != 0; j++)
		{
			total++;
		}
	}
	p = (char *)malloc(sizeof(char) * total + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for(j = 0; av[i][j] != 0; j++)
		{
			p[aux] = av[i][j];
			aux++;
		}
			p[aux] = '\n';
			aux++;		
	}
	return(p);
}
