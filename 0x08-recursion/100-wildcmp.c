#include "holberton.h"
/**
 * aux - auxiliar function
 * @s1: string uno
 * @s2: string dos
 * Return: return an int 0 or 1
 */

int aux(char *s1, char *s2)
{
	if (*(s2 + 1) == 0)
		return (1);
	s2++;
	if (*s1 == 0)
		return (wildcmp(s1, s2));
	return (aux(s1 + 1, s2));
	if (*s1 == *s2)
		return (wildcmp(s1, s2));
}

/**
 * wildcmp - compare wildcard
 * @s1: string 1
 * @s2: string 2
 * Return: 1 or 0 if are equal or no
 */

int wildcmp(char *s1, char *s2)
{

	if (*s2 == '*')
		return (aux(s1, s2));
	if (*s1 == 0 || *s2 == 0)
	{
		if (*s1 == 0 && *s2 == 0)
			return (1);
		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}

