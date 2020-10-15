#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenated 2 string but n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: count of bytes of s2
 * Return: the concatenated strings
 */
int _strlen(char *s)
{

int i = 0;

while (*(s + i) != 0)
	i++;
return (i);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, cont_s1 = 0, cont_s2 = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cont_s1 = _strlen(s1);
	cont_s2 = _strlen(s2);
	if (n >= cont_s2)
		n = cont_s2;
	p = (char *)malloc(sizeof(char) * (cont_s1 + n) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < cont_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = i; j < cont_s2 + i; j++)
	{
		p[j] = s2[j - i];
	}
	p[j + 1] = '\0';
	return (p);
}
