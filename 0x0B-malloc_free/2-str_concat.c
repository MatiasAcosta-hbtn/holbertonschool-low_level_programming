#include "holberton.h"

/**
 * str_concat - 
 * @s1:
 * @s2:
 * Return:
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int cont_s1, cont_s2, i, j;

	while(*(s1 + cont_s1) != 0)
		cont_s1++;
	while(*(s2 + cont_s2) != 0)
		cont_s2++;
	p = malloc(char * (cont_s1 + cont_s2));
	for (i = 0; i < cont_s1; i++)
		p[i] = 
		
}
