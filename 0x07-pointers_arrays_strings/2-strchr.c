#include "holberton.h"
/**
 * _strchr - search a char in an string
 * @s: String
 * @c: char to find
 * Return: the pointer to char or 0 if dont have coincidence
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
