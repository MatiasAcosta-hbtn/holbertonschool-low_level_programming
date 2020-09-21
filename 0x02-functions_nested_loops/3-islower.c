#include "holberton.h"
/**
 * _islower - return if the letter is lower or upper case
 *
 * @c: the character received
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
