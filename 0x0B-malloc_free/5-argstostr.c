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
	int i = 0, j = 0, aux = 0, total = 0;

if (ac == 0 || av == NULL)
	return (NULL);

for (i = 0; i < ac; i++)
{
	for(j = 0; av[j] != 0; j++)
	{
	}
	total += j + 1;
}
printf("%d\n", total);
p = (char *)malloc(sizeof(char) * total);
for (i = 0; i < ac; i++)
{
	for(j = 0; av[j] != 0; j++)
	{
		p[aux] = av[i][j];
		aux++;
	}
}
return (p);
}
