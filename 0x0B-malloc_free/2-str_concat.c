#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1:string 1
 * @s2:string 2
 * Return:the array with concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int cont_s1 = 0, cont_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (*(s1 + cont_s1) != 0)
		cont_s1++;
	while (*(s2 + cont_s2) != 0)
		cont_s2++;
	p = (char *) malloc(sizeof(char) * (cont_s1 + cont_s2 + 2));
	for (i = 0; i < cont_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = i; j < cont_s2 + i; j++)
	{
		p[j] = s2[j - i];
	}
	return (p);
}
