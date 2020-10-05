#include "holberton.h"

/**
 * _strchr - search a char in an string
 * @s: String
 * @c: char to find
 *
 * Return: the pointer to char or 0 if dont have coincidence
 */

char *_strchr(char *s, char c)
{
	int flag = 0;
	char *n = NULL;

	while (*s != 0)
	{
		if (*s == c)
		{
			flag = 1;
			break;
		}
		s++;
	}
	if (flag != 0)
		return (s);
	else
		return (n);
}
