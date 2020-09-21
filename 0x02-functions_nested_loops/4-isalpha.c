#include "holberton.h"
/**
 * _isalpha - show what char is alphabetic
 * @c: the char received
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
