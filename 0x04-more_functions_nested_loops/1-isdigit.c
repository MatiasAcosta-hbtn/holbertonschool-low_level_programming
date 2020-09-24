#include "holberton.h"
/**
 * _isdigit - return if the value is a digit
 *
 * @c: the character received
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
