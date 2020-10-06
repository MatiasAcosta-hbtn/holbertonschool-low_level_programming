#include "holberton.h"

/**
 * _strlen_recursion - count the characters of a string
 * @s: the string
 * Return: the sum of the characters of a string
 */

int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s != 0)
	{
		cont += 1 + _strlen_recursion(s + 1);
	}
	else
		return (0);
	return (cont);
}
