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

	for(i = 0; i < ac; i++)
	{

		for(j = 0; av[i][j] != 0; j++)
		{
			printf("%c",av[i][j]);
		}
		printf("\n");
		total += j + 1;
	}
	p = (char *)malloc(sizeof(char) * total);
	if (p == NULL)
		return (NULL);
	printf("\n\n");
	printf("total de p deberia ser: %d", total);
	for (i = 0; i < ac; i++)
	{
		for(j = 0; av[i][j] != '\0'; j++)
		{
			p[aux] = av[i][j];
			aux++;
			printf("%c",p[aux]);
		}
		printf("\n");		
	}
	return(p);
}
