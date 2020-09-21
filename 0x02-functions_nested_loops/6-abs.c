#include "holberton.h"
/**
 * _abs - return the absolute value
 * @n: number received
 * Return: the absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
