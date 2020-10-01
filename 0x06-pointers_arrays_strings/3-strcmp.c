#include "holberton.h"
/**
 * _strcmp - compair 2 strings
 * @s1: the first string
 * @s2: second string
 * Return: a number
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2)  && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
