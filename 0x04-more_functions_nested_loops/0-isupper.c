#include "holberton.h"
/**
 * _isupper - return if the letter is upper case
 *
 * @c: the character received
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
