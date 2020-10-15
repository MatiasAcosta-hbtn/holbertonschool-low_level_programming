#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenated 2 string but n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: count of bytes of s2
 * Return: the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int cont_s1 = 0, cont_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	cont_s1 = _strlen(s1);
	cont_s2 = _strlen(s2);
	if (n > cont_s2)
	{
		n = cont_s2;
	}
	p = malloc(sizeof(char) * (cont_s1 + n) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < cont_s1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i + j] = s2[j];
	}
	p[i + j] = '\0';
	return (p);
}

/**
 * _strlen - count the leng of s
 * @s: pointer received
 * Return: the lenght of the character received
 */

int _strlen(char *s)
{

int i = 0;

while (*(s + i) != 0)
	i++;
return (i);
}
